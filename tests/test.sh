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

testCanGenerateRandomMACAddressWithTheMOption()
{
  export P1=$(../src/randpass -m)
  assertTrue "'$P1' is not a valid MAC address" "[[ $P1 =~ ^([0-9a-f]{2}[:-]){5}([0-9a-f]{2})$ ]]"
}

# Issue #3
testSometimesNotEveryNumberEndsWith2()
{
  export P1=""
  for i in {1..10}
  do
    P1="$P1$(../src/randpass -m | sed 's/2://g')"
  done
  assertTrue "Each number ends with a 2" "echo '$P1' | grep ':'"
}

# Issue #4
testSometimesNotEveryNumberBeginsWith0()
{
  export P1=""
  for i in {1..10}
  do
    P1="$P1$(../src/randpass -m | sed 's/:0//g')"
  done
  assertTrue "Each number begins with a 0" "echo '$P1' | grep ':'"
}

# Issue #5
testSometimesNotEveryNumberEndsWith2()
{
  export P1=""
  for i in {1..10}
  do
    P1="$P1$(../src/randpass -m | cut -c2)"
  done
  assertTrue "The first number always ends with a 2" "[ $(echo $P1 | sed 's/2//g') == '' ]"
}

# load shunit2
. shunit2
