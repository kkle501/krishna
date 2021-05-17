import com.google.common.collect.ImmutableSet; 
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;
 
// Generate power set of a set in Java
class Main
{
    public static Set<Set<Integer>> powerSet(Set<Integer> ints)
    {
        // convert set to a list
        List<Integer> S = new ArrayList<>(ints);
 
        // `N` stores the total number of subsets
        long N = (long) Math.pow(2, S.size());
 
        // Set to store subsets
        Set<Set<Integer>> result = new HashSet<>();
 
        // generate each subset one by one
        for (int i = 0; i < N; i++)
        {
            Set<Integer> set = new HashSet<>();
 
            // check every bit of `i`
            for (int j = 0; j < S.size(); j++)
            {
                // if j'th bit of `i` is set, add `S[j]` to the current set
                if ((i & (1 << j)) != 0) {
                    set.add(S.get(j));
                }
            }
            result.add(set);
        }
 
        return result;
    }
 
    public static void main(String[] args)
    {
        // Input Set
        Set<Integer> ints = ImmutableSet.of(1, 2);
 
        // Generate power set using Guava
        Set<Set<Integer>> result = powerSet(ints);
 
        // print results
        for (Set<Integer> set: result) {
            System.out.println(set);
        }
    }
}
