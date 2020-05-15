    fun main()
    {
        var inp:String  = readLine()!!.toString()
        val spt = inp.split(' ')
        var n:Int = spt[0]!!.toInt()
        var m:Int = spt[1]!!.toInt()
        var s1:String ="";
        for (i in 1..m)   s1+= if(i%2==0) 'W' else 'B'
        var s2:String ="";
        for (i in 1..m)   s2+= if(i%2==0) 'B' else 'W'
        for(i in 1..n) {
            val ss: String = readLine()!!.toString()
            for(j in 0..m-1){
                if(i%2==1) {
                    if(ss.get(j) =='-') print('-') else print(s1.get(j))
                } else {
                    if(ss.get(j)=='-') print('-') else print(s2.get(j))
                }
            }
            print("\n")
        }
    }
