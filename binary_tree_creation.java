
public class binary_tree_creation {
    public static void main(String[] args) {
        System.out.println("X");
        Tree b = new Tree();
        b.val = 100;
        Tree c = new Tree();
        c.val = 300;
        Tree a = new Tree(10, b, c);
        // Tree.printTree(a);
        Tree bPrime = new Tree();
        bPrime.val = 100;
        Tree cPrime = new Tree();
        cPrime.val = 300;
        Tree aPrime = new Tree(10, bPrime, cPrime);
        // Tree.printTree(aPrime);
        System.out.println(Tree.isEqual(a, aPrime));
    }

}

class Tree {
    int val;
    Tree left;
    Tree right;

    public Tree(int val, Tree left, Tree right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }

    public Tree() {
        left = null;
        right = null;
        val = 0;
    }

    public static void printTree(Tree t) {
        if (t == null) {
            return;
        }
        printTree(t.left);
        System.out.println(t.val);
        printTree(t.right);
    }

    public static boolean isEqual(Tree p, Tree q) {
        if (p == null && q == null) {
            return true;
        }
        if ((p != null && q == null) || (p == null && q != null)) {
            return false;
        } else {
            return ((isEqual(p.right, q.right)) && (p.val == q.val) && (isEqual(p.left, q.left)));
        }

    }
}