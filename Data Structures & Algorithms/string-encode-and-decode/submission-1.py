class Solution:

    def encode(self, strs: List[str]) -> str:
        encoded_msg=""

        for s in strs:
            encoded_msg+=f"{len(s)}" + "#" + s

        return encoded_msg
            
    def decode(self, s: str) -> List[str]:

        messages = []

        i =0

        while i < len(s):
            j = i
            while s[j] != "#":
                j+=1
            
            msg_len = int(s[i:j])

            messages.append(s[j+1:j+msg_len+1])

            i = j+ msg_len + 1

        return messages

