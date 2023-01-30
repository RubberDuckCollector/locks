using System;

class Program {

    static void lock_breaker() {
        
        string lock_combination = "990";

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                for (int k = 0; k < 10; k++) {

                    string i2 = i.ToString();
                    string j2 = j.ToString();
                    string k2 = k.ToString();

                    string output = i2 + j2 + k2;

                    Console.WriteLine(output);

                    if (lock_combination == output) {
                        Console.WriteLine("lock combination found: " + output);
                        return;
                    }
                }
            }
        }
        Console.WriteLine("combination not found");
    }
    
    public static void Main (string[] args) {
        lock_breaker();
    }
}
