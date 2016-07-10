class Solution
    # param a : integer
    #return an integer
    def isPalindrome(a)
        if(a < 0)
            return 0
        end
        if( a >= 0 and a <=9)
            return 1
        end
        s = a.to_s
        p = s.reverse
        
        if(s == p)
            return 1
        else
            return 0
        end

    end
end

