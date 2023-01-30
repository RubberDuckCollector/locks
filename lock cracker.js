function lock() {

    let lock = "032";

    for (let i = 0; i < 10; i++) {
        for (let j = 0; j < 10; j++) {
            for (let k = 0; k < 10; k++) {

                let i2 = i.toString();
                let j2 = j.toString();
                let k2 = k.toString();

                let output = i2 + j2 + k2;

                console.log(output);

                if (output === lock) {
                    console.log(`lock combination found: ${output}`);
                    return;
                }
            }
        }
    }
}

lock();
