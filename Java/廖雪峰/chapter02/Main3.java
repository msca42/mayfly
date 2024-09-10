/**
 * @Description: 整数运算
 */
public class Main3 {
    public static void main(String[] args) {
        int i = (100+200) * (99-88);
        int n = 7 * (5 + (i - 9));
        System.out.println(i);
        System.out.println(n);

        // int x = 2147483640;
        // int y = 15;
        // int sum = x + y;
        // System.out.println(sum); -2147483641
        long x = 2147483640;
        long y = 15;
        long sum = x + y;
        System.out.println(sum); // 2147483655
    }
}
