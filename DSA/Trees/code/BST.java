package DSA.Trees.code;

import java.util.Scanner;

public class BST {
    // Tree Creation
    public class TreeNode {
        int data;
        TreeNode left;
        TreeNode right;

        TreeNode(int data) {
            this.data = data;
            this.left = null;
            this.right = null;
        }
    }

    TreeNode root;

    BST() {
        this.root = null;
    }

    // Insertion
    public TreeNode insert(TreeNode root, int dataToBeInserted) {
        if (root == null) {
            root = new TreeNode(dataToBeInserted);
        }

        if (root.data > dataToBeInserted) {
            root.left = insert(root.left, dataToBeInserted);
        } else if (root.data < dataToBeInserted) {
            root.right = insert(root.right, dataToBeInserted);
        }
        return root;
    }

    // searching
    public TreeNode search(TreeNode root, int dataToBeSearched) {
        if (root == null || root.data == dataToBeSearched) {
            return root;
        }

        if (root.data > dataToBeSearched) {
            return search(root.left, dataToBeSearched);
        }

        return search(root.right, dataToBeSearched);
    }

    // Traversal
    public void inOrder(TreeNode root) {
        if (root == null) {
            return;
        }
        inOrder(root.left);
        System.out.println(root.data + " ");
        inOrder(root.right);
    }

    // wrapper methods
    public void insertIntoTree(int dataToBeInserted) {
        root = insert(root, dataToBeInserted);
    }

    public TreeNode searchTree(int dataToBeSearched) {
        return search(root, dataToBeSearched);
    }

    public void inOrderTraversal() {
        inOrder(root);
    }


    public static void main(String[] args) {
        BST tree = new BST();

        int n, num;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter how many number to be input");
        n = sc.nextInt();

        System.out.println("Enter numbers");
        for(int i=0; i<n; i++){
            num = sc.nextInt();
            tree.insertIntoTree(num);
        }
        System.out.println("Tree Insertion Done");
        System.out.println("------------------------------");

        tree.inOrderTraversal();
        System.out.println("InOrder Traversal");

        System.out.println("------------------------------");
        System.out.println("Enter Data to Search");
        n = sc.nextInt();

        if(tree.searchTree(n) != null){
            System.out.println("Found");
        }else{
            System.out.println("Not Found");
        }
    }

}
