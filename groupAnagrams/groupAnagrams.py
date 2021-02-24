def groupAnagrams (str):
    dict={}

    for element in str:
        sorted_word=str(sorted(i))

        if sorted_word not in dict:
            dict[sorted_word]=[]
        dict[sorted_word].append(i)
    return dict.values()

ex1 = ["eat", "tea", "tan", "ate", "nat", "bat"]
str="abcde"
groupAnagrams(ex1)