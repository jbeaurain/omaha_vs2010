set SCONS_DIR=C:\Python24\Lib\site-packages\scons-1.3.1
rem -- @echo off
rem -- Set all environment variables used by Hammer and Omaha. --
set OMAHA_NET_DIR=%WINDIR%\Microsoft.NET\Framework\v2.0.50727
set OMAHA_WTL_DIR=C:\WTL80\include
set OMAHA_WIX_DIR=%ProgramFiles(x86)%\WiX Toolset v3.6\bin
set OMAHA_VISTASDK_DIR=%ProgramFiles%\Microsoft SDKs\Windows\v6.1
set OMAHA_PSEXEC_DIR=%ProgramFiles%\SysinternalsSuite
set OMAHA_PYTHON_DIR=C:\Python24
set SCONS_DIR=%OMAHA_PYTHON_DIR%\Lib\site-packages\scons-1.3.1
set SCT_DIR=C:\swtoolkit
rem -- Add Visual Studio and Python to our path, and set VC env variables. --
rem -- call "%ProgramFiles(x86)%\Microsoft Visual Studio 10\VC\bin\vcvars32.bat"
rem -- Fix OmahaCustomizationTest.IsInternalUser test fail
set OMAHA_TEST_BUILD_SYSTEM=1
path %OMAHA_PYTHON_DIR%;%PATH%
set INCLUDE=%INCLUDE%C:\atlmfc\include;C:\WTL80\include;
