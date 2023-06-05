class TreeNode:
    def __init__(self, key, parent=None):
        self.key = key
        self.left = None
        self.right = None
        self.parent = parent


def inorder(root):
    if root is not None:
        inorder(root.left)
        print(str(root.key) + "->", end='')
        inorder(root.right)


def levels(root):
    print(root.key)
    i = 0
    while root.left is not None and root.right is not None:

        i += 1


# def insert(root: TreeNode, key: int):
#     while root.left is not None and root.right is not None:
#         root = root.left
