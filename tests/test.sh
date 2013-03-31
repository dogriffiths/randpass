#!/bin/bash

testPasswordChanges()
{
  export P1=$(../src/randpass)
  export P2=$(../src/randpass)
  assertNotEquals "Two calls product same password: '$P1'" "$P1" "$P2"
}

testPasswordChangesWhenUsingRandLib()
{
  for i in {1..50}
  do
    export P1=$(../src/randpass -r)
    export P2=$(../src/randpass -r)
    assertNotEquals "Two calls product same password: '$P1'" "$P1" "$P2"
  done
}

testPasswordHas32CharsByDefault()
{
  assertEquals "Wrong length" $(../src/randpass | awk '{print length}') 32
}

testCanSpecifyLength()
{
  for i in {1..50}
  do
    assertEquals "Wrong length" $(../src/randpass -n $i | awk '{print length}') $i
  done
}

testCantSpecifyLengthLessThanOne()
{
  for i in {-5..0}
  do
    assertEquals "Wrong length" "$(../src/randpass -n $i 2>&1)" 'Must produce at least one character'
  done
}

testCanGenerateJustAlphaNumerics()
{
  assertEquals "Generated non-alphanumerics" $(../src/randpass -a | tr 'A-Za-z0-9' ' ' | sed 's/ //g' | awk '{print length}') 0
}



# load shunit2
. shunit2
