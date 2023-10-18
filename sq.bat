cd src
build-wrapper-win-x86-64 --out-dir ..\bw-output gcc *.c

cd ..


sonar-scanner.bat -Dsonar.projectKey=basic -Dsonar.cfamily.build-wrapper-output=bw-output -Dsonar.host.url=http://localhost:9900 -Dsonar.token=sqp_91b2b79d7fc2104d07a09b7ee7852c2b6c6645db -Dsonar.lauguage=c -Dsonar.sources=src -Dsonar.cfamily.cppunit.reportsPath=test-results/cppunit -Dsonar.cfamily.cobertura.reportPaths=test-cov/coverage.xml -X > sonar_x.log 2>&1
