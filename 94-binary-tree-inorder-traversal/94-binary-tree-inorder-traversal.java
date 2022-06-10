/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> list=new ArrayList<Integer>();
        if(root == null) return list;
        Stack<TreeNode> stack = new Stack<TreeNode>();
        TreeNode node = root;  
        
        while(true){
            if(node != null){
                stack.push(node);
                node = node.left;
            }else{
                if(stack.isEmpty()){
                    break;
                 }
                node = stack.pop();
                list.add(node.val);
                node = node.right;
            }
            
        }
        return list;
        
    }
    
}