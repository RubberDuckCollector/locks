fn lock() {
    
    let lock = "583";

    for i in 0..10 {
        for j in 0..10 {
            for k in 0..10 {

                let i2 = i.to_string();
                let j2 = j.to_string();
                let k2 = k.to_string();

                let output = format!("{}{}{}", i2, j2, k2);

                println!("{}", output);

                if output == lock {
                    println!("lock combination found: {}", output);
                    return;
                }
            }
        }
    }
    println!("combination not found");
}

fn main() {
    lock();
}
