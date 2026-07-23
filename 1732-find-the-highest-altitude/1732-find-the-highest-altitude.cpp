class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        // vector <int> altitudes;
        int peak = 0, highest = -1;
        // altitudes[0] = 0;
        for(int i = 0;i <= gain.size()-1;i++ ){
            peak = peak + gain[i];
            // altitudes[i+1] = peak;
            if(peak>highest){
                highest = peak;
            }
        }
        if(highest == -1){
            highest = 0;
        }
        return highest;
    }
};