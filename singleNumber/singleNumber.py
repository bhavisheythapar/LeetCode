def singleNumber(nums):
    nums.sort()
    if (len(nums)==1):
        return nums[0]
    for i in range(len(nums)):
        if (i==len(nums)-1):
            return nums[i]
        elif (nums[i] != nums [i-1] and nums[i] != nums [i+1]):
            return nums[i]

test1=[1,3,1,4,4,5,7,5,7]
print(singleNumber(test1))