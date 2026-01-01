from typing import List
from collections import Counter

class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        # Initialize with frequency of first word
        common = Counter(words[0])
        
        # Intersect with remaining words
        for word in words[1:]:
            common &= Counter(word)
        
        # Build result
        result = []
        for char, freq in common.items():
            result.extend([char] * freq)
        
        return result
