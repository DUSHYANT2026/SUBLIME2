// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int n,x;
// 	cin>>n;
// 	vector<int> nums;
// 	for(int i=0; i<n; i++){
// 		cin>>x;
// 		nums.push_back(x);
// 	}

// 	int sum = 0;

// 	while(true){
// 		vector<int> temp;
// 		for(int i=0; i<nums.size(); i++){
// 			if(i%2 == 0) sum += nums[i];
// 			else temp.push_back(nums[i]);
// 		}
// 		if(temp.size() == 1) break;
// 		nums = temp;
//  	}
//  	cout<<sum<<endl;
//  	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s; 
//     // getline(cin,s);
//     stringstream ss(s);
//     string temp;
//     vector<string> nums;
//     while(cin >> temp){
//         nums.push_back(temp);
//     }
//     vector<string> ans;
//     for(int i=0; i<nums.size(); i++){
//         string x= nums[i];
//         reverse(x.begin(),x.end());
//         ans.push_back(x);
//     }
//     for(auto it : ans) cout<<it<<" ";
//     return 0;
// }

#include <iostream>
#include <vector>
#include <array>
#include <unordered_map>
#include <cmath>

using namespace std;

struct Coordinate {
    int horizontal, vertical;
    bool operator==(const Coordinate &other) const { 
        return horizontal == other.horizontal && vertical == other.vertical; 
    }
};

struct CoordinateHasher {
    size_t operator()(Coordinate const &point) const {
        return (static_cast<uint64_t>(static_cast<uint32_t>(point.horizontal)) << 32) ^ static_cast<uint32_t>(point.vertical);
    }
};

struct SlidePosition {
    int horizontal, vertical, slideIdentifier;
    bool operator==(const SlidePosition &other) const { 
        return horizontal == other.horizontal && vertical == other.vertical && slideIdentifier == other.slideIdentifier; 
    }
};

struct SlidePositionHasher {
    size_t operator()(SlidePosition const &position) const {
        uint64_t hashValue = position.horizontal;
        hashValue = (hashValue << 21) ^ position.vertical;
        hashValue = (hashValue << 21) ^ position.slideIdentifier;
        return static_cast<size_t>(hashValue);
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<long long> inputData;
    long long value;
    while (cin >> value) {
        inputData.push_back(value);
    }

    int dataIndex = 0;
    int totalSlides = static_cast<int>(inputData[dataIndex++]);
    
    vector<array<int, 4>> slideData(totalSlides);
    for (int i = 0; i < totalSlides; i++) {
        slideData[i][0] = static_cast<int>(inputData[dataIndex++]);
        slideData[i][1] = static_cast<int>(inputData[dataIndex++]);
        slideData[i][2] = static_cast<int>(inputData[dataIndex++]);
        slideData[i][3] = static_cast<int>(inputData[dataIndex++]);
    }
    
    int initialHorizontal = static_cast<int>(inputData[dataIndex++]);
    int initialVertical = static_cast<int>(inputData[dataIndex++]);
    int remainingEnergy = static_cast<int>(inputData[dataIndex++]);

    unordered_map<Coordinate, vector<int>, CoordinateHasher> coordinateToSlides;
    unordered_map<SlidePosition, pair<int, int>, SlidePositionHasher> slideTransitionPoints;

    for (int slideId = 0; slideId < totalSlides; slideId++) {
        int startHorizontal = slideData[slideId][0], startVertical = slideData[slideId][1];
        int endHorizontal = slideData[slideId][2], endVertical = slideData[slideId][3];
        int horizontalDirection = (endHorizontal > startHorizontal) ? 1 : -1;
        int verticalDirection = (endVertical > startVertical) ? 1 : -1;
        int slideLength = abs(endHorizontal - startHorizontal);

        if (verticalDirection == -1) {
            for (int step = 0; step < slideLength; step++) {
                int currentHorizontal = startHorizontal + horizontalDirection * step;
                int currentVertical = startVertical - step;
                coordinateToSlides[{currentHorizontal, currentVertical}].push_back(slideId);
                slideTransitionPoints[{currentHorizontal, currentVertical, slideId}] = {currentHorizontal + horizontalDirection, currentVertical - 1};
            }
            coordinateToSlides[{endHorizontal, endVertical}].push_back(slideId);
        } else {
            for (int step = 0; step < slideLength; step++) {
                int currentHorizontal = endHorizontal - horizontalDirection * step;
                int currentVertical = endVertical - step;
                coordinateToSlides[{currentHorizontal, currentVertical}].push_back(slideId);
                slideTransitionPoints[{currentHorizontal, currentVertical, slideId}] = {currentHorizontal - horizontalDirection, currentVertical - 1};
            }
            coordinateToSlides[{startHorizontal, startVertical}].push_back(slideId);
        }
    }

    auto findFallDestination = [&](int horizontal, int vertical) -> pair<int, int> {
        for (int fallVertical = vertical - 1; fallVertical >= 0; fallVertical--) {
            auto searchResult = coordinateToSlides.find({horizontal, fallVertical});
            if (searchResult != coordinateToSlides.end()) {
                return {horizontal, fallVertical};
            }
        }
        return {horizontal, 0};
    };

    int currentHorizontal = initialHorizontal;
    int currentVertical = initialVertical;

    if (coordinateToSlides.find({currentHorizontal, currentVertical}) == coordinateToSlides.end()) {
        pair<int, int> landingPoint = findFallDestination(currentHorizontal, currentVertical);
        currentHorizontal = landingPoint.first;
        currentVertical = landingPoint.second;
    }

    while (true) {
        if (currentVertical == 0) break;

        auto searchResult = coordinateToSlides.find({currentHorizontal, currentVertical});
        if (searchResult == coordinateToSlides.end()) {
            pair<int, int> landingPoint = findFallDestination(currentHorizontal, currentVertical);
            currentHorizontal = landingPoint.first;
            currentVertical = landingPoint.second;
            continue;
        }

        auto &availableSlides = searchResult->second;
        if (availableSlides.size() == 1) {
            int slideId = availableSlides[0];
            auto transitionSearch = slideTransitionPoints.find({currentHorizontal, currentVertical, slideId});
            if (transitionSearch == slideTransitionPoints.end()) {
                pair<int, int> landingPoint = findFallDestination(currentHorizontal, currentVertical);
                currentHorizontal = landingPoint.first;
                currentVertical = landingPoint.second;
                continue;
            }
            if (remainingEnergy == 0) break;
            remainingEnergy--;
            currentHorizontal = transitionSearch->second.first;
            currentVertical = transitionSearch->second.second;
        } else {
            long long intersectionCost = 1LL * currentHorizontal * currentVertical;
            vector<pair<int, pair<int, int>>> possibleDestinations;
            possibleDestinations.reserve(availableSlides.size());
            for (int slideId : availableSlides) {
                auto transitionSearch = slideTransitionPoints.find({currentHorizontal, currentVertical, slideId});
                if (transitionSearch != slideTransitionPoints.end()) {
                    possibleDestinations.push_back({slideId, transitionSearch->second});
                }
            }

            if ((long long)remainingEnergy <= intersectionCost) {
                if (possibleDestinations.empty()) {
                    pair<int, int> landingPoint = findFallDestination(currentHorizontal, currentVertical);
                    currentHorizontal = landingPoint.first;
                    currentVertical = landingPoint.second;
                }
                break;
            }

            remainingEnergy -= static_cast<int>(intersectionCost);
            if (possibleDestinations.empty()) {
                pair<int, int> landingPoint = findFallDestination(currentHorizontal, currentVertical);
                currentHorizontal = landingPoint.first;
                currentVertical = landingPoint.second;
                continue;
            }

            int bestNextHorizontal = 0;
            int bestNextVertical = -1;
            for (auto &destination : possibleDestinations) {
                int nextHorizontal = destination.second.first;
                int nextVertical = destination.second.second;
                if (nextVertical > bestNextVertical) {
                    bestNextVertical = nextVertical;
                    bestNextHorizontal = nextHorizontal;
                }
            }
            if (remainingEnergy == 0) break;
            remainingEnergy--;
            currentHorizontal = bestNextHorizontal;
            currentVertical = bestNextVertical;
        }
    }

    cout << currentHorizontal << " " << currentVertical << endl;
    return 0;
}