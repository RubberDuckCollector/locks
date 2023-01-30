function lock()

    lock = "111"

    for i = 0, 9 do
        for j = 0, 9 do
            for k = 0, 9 do

                i2 = tostring(i)
                j2 = tostring(j)
                k2 = tostring(k)

                output = i2 .. j2 .. k2

                print(output)

                if output == lock then
                    print("lock combination found:", output)
                    return
                end
            end
        end
    end
    print("combination not found")
end

lock()
