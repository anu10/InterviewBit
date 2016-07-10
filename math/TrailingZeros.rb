class Solution
    # param a : integer
    #return an integer
    def trailingZeroes(a)
        count = 0
        while(a > 0)
            count += a/5
            a = a/5
        end
        
        return count
    end
end

