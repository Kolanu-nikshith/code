/*
 * @lc app=leetcode id=1396 lang=cpp
 *
 * [1396] Design Underground System
 */

// @lc code=start
class UndergroundSystem {
public:
    // map<id, pair<startStation, time>> in; to store in time;
    //map<pair<startSt, endSt>>, pair<totaldist, countofpeople>> avg;
    map<int, pair<string, int>> in;
    map<pair<string, string>, pair<int, int>> avg;
    
    
    
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        in[id] = {stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        // if exists in map{
            //update the avg map. first time or if already exists and erase it
        // }

        if(in.count(id)){
            string from = in[id].first;
            int dist = t- in[id].second;
            if(avg.count({from, stationName})){
                pair<int, int> temp = avg[{from, stationName}]; 
                avg[{from, stationName}] = {temp.first+dist, temp.second+1};
            }else{
                avg[{from, stationName}] = {dist, 1};
            }
            in.erase(id);
        }
    }
    
    double getAverageTime(string startStation, string endStation) {
        // take avg of totaldist/ noofpeople
     return avg[{startStation, endStation}].first / (double)avg[{startStation, endStation}].second;   
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
// @lc code=end

