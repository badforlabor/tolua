:: 所有的pkg文件，都来自目录 \src\tests
:: 按照tolua的规则，pkg文件和h文件必须在同一目录下。

echo off
:: debug版本的
::set tolua=tolua++_d.exe
:: release版本的
set tolua=tolua++.exe
echo on


%tolua% -o 1.cpp tarray.pkg
%tolua% -o 2.cpp tclass.pkg
%tolua% -o 3.cpp tconstant.pkg
%tolua% -o 4.cpp tdirective.pkg

:: 这个是有错误的
%tolua% -o 5.cpp tdirectivepkg.pkg


%tolua% -o 6.cpp tfunction.pkg
%tolua% -o 7.cpp tmodule.pkg
%tolua% -o 8.cpp tnamespace.pkg
%tolua% -o 9.cpp tvariable.pkg

pause