class TreeNode:
    def __init__(self, key):
        self.key = key
        self.left = None
        self.right = None


def inorder(root):
    if root is not None:
        inorder(root.left)
        print(str(root.key) + "->", end='')
        inorder(root.right)


def insert(node, key):
    if node is None:
        return TreeNode(key)

    if key < node.key:
        node.left = insert(node.left, key)
    else:
        node.right = insert(node.right, key)

    return node


def min_value_node(node):
    # Find the leftmost leaf
    while node.left is not None:
        node = node.left

    return node


def delete(root, key):
    if root is None:
        return root

    if key < root.key:
        root.left = delete(root.left, key)
    elif key > root.key:
        root.right = delete(root.right, key)
    else:
        if root.left is None:
            temp = root.right
            root = None
            return temp

        elif root.right is None:
            temp = root.left
            root = None
            return temp

        temp = min_value_node(root.right)

        root.key = temp.key

        root.right = delete(root.right, temp.key)

    return root


tree_root = TreeNode(8)
insert(tree_root, 3)
insert(tree_root, 10)
insert(tree_root, 1)
insert(tree_root, 6)
insert(tree_root, 14)
insert(tree_root, 4)
insert(tree_root, 7)
inorder(tree_root)
