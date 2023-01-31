<?php
function lock() {

    $lock = "304";

    for ($i = 0; $i < 10; $i++) {
        for ($j = 0; $j < 10; $j++) {
            for ($k = 0; $k< 10; $k++) {

                $i2 = strval($i);
                $j2 = strval($j);
                $k2 = strval($k);

                $output = $i2 . $j2 . $k2;

                echo $output;
                echo "\n";

                if ($output == $lock) {
                    echo "lock combination found: $output";
                    return;
                }
            }
        }
    }
    echo "combination not found";
}

lock();
