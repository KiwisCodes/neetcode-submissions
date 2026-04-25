class Solution {
public:
    int trap(vector<int>& height) {
        int first_index = 0, second_index = 1;
        int cur_sum_water = 0, sum_water = 0;
        while(first_index<height.size()||second_index < height.size())
        {
            if(height[second_index]>=height[first_index])
            {
                if(first_index != 0 && height[first_index]!=0)
                {
                    sum_water += cur_sum_water;
        // cout<<first_index<<" "<<second_index<<" "<<cur_sum_water<<" "<<sum_water<<"\n";
                    cur_sum_water = 0;
                }
                first_index = second_index;
                second_index++;
            }
            else
            {
                if(second_index == height.size()-1)
                {
                    cur_sum_water = 0;
                    first_index = second_index;
                    break;
                }
                else
                {
                    cur_sum_water += height[first_index] - height[second_index];
                    second_index++;
                }
            }
        }
        return sum_water;
    }
};
