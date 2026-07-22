class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int ans = -1;
        int start = 0;
        int end = letters.size() - 1;
        int mid = start + (end - start)/2;
        while(start <= end){
            if(letters[mid]>target){
                end = mid - 1;
                ans = mid;
            }else{
                start = start + 1;
            }
            mid = start + (end - start)/2;
        }
        if(ans == -1){
            return letters[0];
        }
    return letters[ans] ;      
    }
};