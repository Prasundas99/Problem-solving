import java.util.*;

public class Permutations {

    public static void main(String[] args) {
        int[] a = { 1, 2, 3 };

        System.out.println(permute(a));
    }

    public static List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> list = new ArrayList<>();

        backtrack(list, new ArrayList<>(), nums);
        return list;
    }

    private static void backtrack(List<List<Integer>> list, List<Integer> tempList, int[] nums) {
        System.out.println("recall");
        System.out.println(tempList);
        if (tempList.size() == nums.length) {
            System.out.println("if satisfy");
            System.out.println(tempList);
            list.add(new ArrayList<>(tempList));
        } else {
            for (int i = 0; i < nums.length; i++) {
                if (tempList.contains(nums[i]))
                    continue; // element already exists, skip
                tempList.add(nums[i]);
                System.out.println("add");
                System.out.println(tempList);
                backtrack(list, tempList, nums);
                tempList.remove(tempList.size() - 1);
                System.out.println("rm");
                System.out.println(tempList);
            }
        }
    }
}
