public class Main6 {
    public static void main(String[] args) {
        int n1 = 68;
        int n2 = 79;
        int n3 = 91;
        int n4 = 85;
        int n5  = 62;

        int [] ns = new int[5];
        ns[0] = 68;
        ns[1] = 79;
        ns[2] = 91;
        ns[3] = 85;
        ns[4] = 62;

        System.out.println(ns.length);
        //System.out.println(ns[5]);
        ns  = new int[] {68,79,91,85,62};
        System.out.println(ns.length);
        ns = new int[] { 1, 2, 3 };
        System.out.println(ns.length);

        String[] names = {
            "ABC","XYZ","zoo"
        };
        String s = names[1];
        names[1] = "cat";
        System.out.println(s);
    }
}
