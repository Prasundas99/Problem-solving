    def maximumWealth(self, accounts):
        """
        :type accounts: List[List[int]]
        :rtype: int
        """
        maxWealth = 0;
        for i in accounts:
            max = 0
            for col in i:
                max = max + col
            if(max>maxWealth):
                maxWealth = max
        return maxWealth 