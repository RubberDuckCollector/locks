def lock

    lock = "999"

    0.upto(9) do |i|
        0.upto(9) do |j|
            0.upto(9) do |k|

                i2 = i.to_s
                j2 = j.to_s
                k2 = k.to_s

                output = i2 + j2 + k2

                puts output

                if output == lock
                    puts "lock combination found: #{output}"
                    return
                end
                
            end
        end
    end
    puts "combination not found"
end

lock
