class Main {

    public static void lock() {
        
        String lock = "750";

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                for (int k = 0; k < 10; k++) {

                    String i2 = String.valueOf(i);
                    String j2 = String.valueOf(j);
                    String k2 = String.valueOf(k);

                    String output = i2 + j2 + k2;

                    System.out.println(output);

                    if (output.equals(lock)) {
                        System.out.println("lock combination found: " + output);
                        return;
                    }
                        
                }
            }
        }

        System.out.println("combination not found");
    }
    
    public static void main(String[] args) {
        lock();
    }
}
