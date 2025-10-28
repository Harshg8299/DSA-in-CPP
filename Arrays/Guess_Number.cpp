/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) 
    {
        // int i = 1;
        // for(; i <= n; i++)
        // {
        //     if(guess(i) == 0)
        //         return i;
        // }
        // return i;
        int s = 1, e = n,mid;
        
        for(; s <= e;)
        {
            mid = s + (e - s)/2;
            if(guess(mid) == 0)
                return mid;
            else if(guess(mid) == 1)
            {
                s =  mid + 1;
            }
            else
            {
                e = mid;
            }
        }
        return mid;
    }
};
