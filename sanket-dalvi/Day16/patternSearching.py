class Node:
    def __init__(self):
        self.children = [None]*26
        self.leaf = False

    def getInd(self, node):
        return ord('A') - ord(node)

    def insert(self, node):
        ind = self.getInd(node)
        self.children[ind] = Node()


pattern = "TEST"
string = "THIS IS A TEST TEXT"
root = Node()
trie = root
for i in range(len(pattern)):
    trie.insert(pattern[i])
    trie = trie.children[trie.getInd(pattern[i])]
trie.leaf = True


def match(trie, index):
    if trie.leaf:
        return True
    else:
        if index < len(string) and string[index] != " " and trie.children[trie.getInd(string[index])]:
            return match(trie.children[trie.getInd(string[index])], index+1)
        else:
            return False


def find(trie, string):
    for i in range(len(string)):
        if match(trie, i):
            return i
    return -1


# Test
print(find(root, string))
