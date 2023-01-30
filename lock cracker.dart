void lock() {

    String lock = "821";

    for (var i = 0; i < 10; i++) {
        for (var j = 0; j < 10; j++) {
            for (var k = 0; k < 10; k++) {

                String i2 = i.toString();
                String j2 = j.toString();
                String k2 = k.toString();

                String output = i2 + j2 + k2;

                print(output);

                if (output == lock) {
                    print("lock combination found: " + output);
                    return;
                }
            }
        }
    }
    print("combination not found");
}

void main() {
    lock();
}
