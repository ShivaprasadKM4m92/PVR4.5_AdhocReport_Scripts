Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_header("Origin", 
		"https://www.google.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.97 Safari/537.36");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTTP", 
		"Body= ", 
		LAST);

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_header("If-None-Match", 
		"a185f3e0bb96b372f21f66c844ddb377b30cf05c");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=83", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("auth", 
		"URL=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_concurrent_start(NULL);

	web_url("login-56e6216b7dfd4b175b930dda2cfcea23.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/login-56e6216b7dfd4b175b930dda2cfcea23.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t4.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t5.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("cookiecuttr-a7a609074d7bc97460b6aab9935c3468.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/cookiecuttr-a7a609074d7bc97460b6aab9935c3468.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t6.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("application-f8ff3189b5e73f6aa63ba16652634041.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/application-f8ff3189b5e73f6aa63ba16652634041.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t7.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("jquery.cookie-1.4.1.min-62bfa1d0d94f4791957d86b90ba720db.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/jquery/jquery.cookie-1.4.1.min-62bfa1d0d94f4791957d86b90ba720db.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t8.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("customise-jquery.cookiecuttr-7d5013f65bb830d28e9c0f882402df22.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/jquery/customise-jquery.cookiecuttr-7d5013f65bb830d28e9c0f882402df22.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t9.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("Origin", 
		"https://pvr-perf.rxlogix.com");

	web_add_header("Accept", 
		"*/*");

	web_concurrent_start(NULL);

	web_url("OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2?v=1.1.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://pvr-perf.rxlogix.com/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t10.inf", 
		LAST);

	web_url("client_model_v5_ext_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_ext_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t11.inf", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIlCaqJjitNkEYsEgsN541ADhIAGgAiABILDc5BTHoSABoAIgAaAA==", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIlCaqJjitNkEYsEgsN541ADhIAGgAiABILDc5BTHoSABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t12.inf", 
		LAST);

	web_url("client_model_v5_variation_0.pb", 
		"URL=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_0.pb", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t13.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-Goog-Update-AppId", 
		"aapocclcgogkmnckokdopfmhonfmgoek,aohghmighlieiainnegkcijnfilokake,apdfllckaahabafndbhieahigkjlhalf,blpcfgokakmgnkcojhhkbfbldkacnbeo,felcaaldnbdncclmgdcncolpebgiejap,ghbmnnjooekpmoecnnnilnnbdlolhkhi,nmmhkkegccagdldgiimedpiccmgmieda,pjkljhegncpnkpknbcohdijeoejaedia,pkedcjkdefgpdelpbcmbmeomcjbeemfm");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-83.0.4103.97");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:2724348022&cup2hreq=946894c8584e4c34bc29afca048fc3b751bb3c07607a9312305aa649b5d42d18", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"aapocclcgogkmnckokdopfmhonfmgoek\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{dd909bfd-76c3-4ffb-89d3-6f0aa94a8234}\",\"rd\":4915},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"aohghmighlieiainnegkcijnfilokake\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\""
		",\"packages\":{\"package\":[{\"fp\":\"2.0.10\"}]},\"ping\":{\"ping_freshness\":\"{912f4343-1bfe-4455-87a6-e0e87a5a8bef}\",\"rd\":4915},\"updatecheck\":{},\"version\":\"0.10\"},{\"appid\":\"apdfllckaahabafndbhieahigkjlhalf\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.14.2\"}]},\"ping\":{\"ping_freshness\":\"{32430659-c31c-4eb8-92e7-0130da5271ac}\",\"rd\":4915},\"updatecheck\":{},\"version\":\"14.2\"},{\"appid\":\""
		"blpcfgokakmgnkcojhhkbfbldkacnbeo\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.4.2.8\"}]},\"ping\":{\"ping_freshness\":\"{816bfb19-7f6c-45ce-bd1b-b3b4e94077c5}\",\"rd\":4915},\"updatecheck\":{},\"version\":\"4.2.8\"},{\"appid\":\"felcaaldnbdncclmgdcncolpebgiejap\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.1.2\"}]},\"ping\":{\"ping_freshness\":\""
		"{ff10a42f-60e5-4381-bedb-b9f7eb590c1d}\",\"rd\":4915},\"updatecheck\":{},\"version\":\"1.2\"},{\"appid\":\"ghbmnnjooekpmoecnnnilnnbdlolhkhi\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"external\",\"packages\":{\"package\":[{\"fp\":\"1.693458e8d61b08ad38d9dceec8d6204a74cfc0952a39dca6d1e6d4828a5cbcf4\"}]},\"ping\":{\"ping_freshness\":\"{7c7436ca-4169-4a50-8332-2bbff5d5ba34}\",\"rd\":4915},\"updatecheck\":{},\"version\":\"1.11.0\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"brand\""
		":\"GCEU\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"2.1.0.0.5\"}]},\"ping\":{\"ping_freshness\":\"{a529fe35-d3cc-4c68-8d16-80500a30ba47}\",\"rd\":4915},\"updatecheck\":{},\"version\":\"1.0.0.5\"},{\"appid\":\"pjkljhegncpnkpknbcohdijeoejaedia\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"internal\",\"packages\":{\"package\":[{\"fp\":\"2.8.2\"}]},\"ping\":{\"ping_freshness\":\"{7a9f7812-a44c-48d9-b5e4-1e3203512983}\",\"rd\":4915},\"updatecheck\":{},\""
		"version\":\"8.2\"},{\"appid\":\"pkedcjkdefgpdelpbcmbmeomcjbeemfm\",\"brand\":\"GCEU\",\"enabled\":true,\"installedby\":\"other\",\"packages\":{\"package\":[{\"fp\":\"1.2ab2be7a7c283b0e4ec01de815baab251360d04ad22206876428ad1cbedc446f\"}]},\"ping\":{\"ping_freshness\":\"{8bab6d2c-74ab-47fd-bef1-e0e4941a3f76}\",\"rd\":4915},\"updatecheck\":{},\"version\":\"8320.407.0.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\","
		"\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.1282\"},\"prodversion\":\"83.0.4103.97\",\"protocol\":\"3.1\",\"requestid\":\"{317e6e3b-66e3-4d13-8aa7-1dd3e33444ed}\",\"sessionid\":\"{c886bfa3-326a-4596-b7b3-3b409fb00448}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.452\"},\"updaterversion\":\"83.0.4103.97\"}}", 
		LAST);

	lr_start_transaction("Rep11_T01_OpenApplication");

	lr_end_transaction("Rep11_T01_OpenApplication",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("Rep11_T02_Login");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Cache-Control", 
		"max-age=0");

	web_add_header("Content-Type", 
		"application/x-www-form-urlencoded");

	web_add_header("Origin", 
		"https://pvr-perf.rxlogix.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("authenticate", 
		"Action=https://pvr-perf.rxlogix.com/reports/login/authenticate", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/login/auth", 
		"Snapshot=t15.inf", 
		"Mode=HTTP", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=username", "Value=Shiva.Prasad", ENDITEM, 
		"Name=password", "Value=Shiva@12345", ENDITEM, 
		"Name=_csrf", "Value=06a8817d-c662-46c5-90f6-496bfa64a5e6", ENDITEM, 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_concurrent_start(NULL);

	web_url("theme_gradient_blue-8a7bc35778c66c2a34b346cddd101ad7.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/theme_gradient_blue-8a7bc35778c66c2a34b346cddd101ad7.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t16.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("rxapplication-eebebbeb632a82e8608209da3ab42ef2.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/rxapplication-eebebbeb632a82e8608209da3ab42ef2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t17.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("addWidgetModal-bc44f3ca86f2d9d04cffae53d3e60ffe.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/dashboard/addWidgetModal-bc44f3ca86f2d9d04cffae53d3e60ffe.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t18.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("fuelux-b7cf5c5c681fcdbd63156284516c90e9.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fuelux-b7cf5c5c681fcdbd63156284516c90e9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t19.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t20.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("workflowModal-5491f0c21ba11e20273f35eef0ac46f9.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/workflowModal-5491f0c21ba11e20273f35eef0ac46f9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t21.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("dashboard-8dee5417b984f9891cddc783e9314ce6.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/dashboard-8dee5417b984f9891cddc783e9314ce6.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t22.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("dashboard-6dd61aa074730ab4e42c45fa3a7e4ba4.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/dashboard/dashboard-6dd61aa074730ab4e42c45fa3a7e4ba4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t23.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("fullcalendar.min-c86583f19d010365c34f3af8b45f413e.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fullcalendar.min-c86583f19d010365c34f3af8b45f413e.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t24.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("actionItemModal-3aad9e3af0797db4c41b1627e23b464d.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/actionItem/actionItemModal-3aad9e3af0797db4c41b1627e23b464d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t25.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_url("fullcalendar-ab21481ecaaf856ac398df2626c214f0.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fullcalendar/fullcalendar-ab21481ecaaf856ac398df2626c214f0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t26.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("en.json", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t27.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("workFlow-3b78500b81fd61ce5b59cc202a54e63c.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/workFlow-3b78500b81fd61ce5b59cc202a54e63c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t28.inf", 
		LAST);

	web_url("fullcalendar-lang-all-e4e9be403fd4dc092b72c368c27e5d47.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fullcalendar/fullcalendar-lang-all-e4e9be403fd4dc092b72c368c27e5d47.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t29.inf", 
		LAST);

	web_url("calendar-f9ce111f86c4726c1303830d83a16683.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/calendar-f9ce111f86c4726c1303830d83a16683.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t30.inf", 
		LAST);

	web_url("highcharts-01ce2a5c16b4e040b95b02d8cf3ea23e.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/highcharts/highcharts-01ce2a5c16b4e040b95b02d8cf3ea23e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t31.inf", 
		LAST);

	web_url("fuelux-58910ec6bd502e7c4aabf85922131616.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fuelux/fuelux-58910ec6bd502e7c4aabf85922131616.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t32.inf", 
		LAST);

	web_url("highcharts-more-31bca387194b423710d019dfa069474a.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/highcharts/highcharts-more-31bca387194b423710d019dfa069474a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t33.inf", 
		LAST);

	web_url("highcharts-3d-b0c0c823b44f85cb61361491f4353576.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/highcharts/highcharts-3d-b0c0c823b44f85cb61361491f4353576.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t34.inf", 
		LAST);

	web_url("grouped-categories-8ddf90b557e5da14225afefcaa8bf9f6.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/highcharts/plugins/grouped-categories-8ddf90b557e5da14225afefcaa8bf9f6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t35.inf", 
		LAST);

	web_url("no-data-to-display-93457bf691aefc406c1da97a1f8d7e2d.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/highcharts/modules/no-data-to-display-93457bf691aefc406c1da97a1f8d7e2d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t36.inf", 
		LAST);

	web_url("gridstack.min-157675a5f94f1a18234a494030c5d8f0.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/gridstack/gridstack.min-157675a5f94f1a18234a494030c5d8f0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t37.inf", 
		LAST);

	web_url("gridstack.jQueryUI.min-5bd5204d23705e69adeb23742f04ff8c.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/gridstack/gridstack.jQueryUI.min-5bd5204d23705e69adeb23742f04ff8c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t38.inf", 
		LAST);

	web_url("pushNotification-3d08817200dceb0a405d9f7aefa3192f.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/pushNotification-3d08817200dceb0a405d9f7aefa3192f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t39.inf", 
		LAST);

	web_revert_auto_header("Accept");

	web_revert_auto_header("Accept-Language");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,llkgjffcdpffmhiakmfcdcblohccpfmo,oimompecagnajdejgnnjijobebaeigek,mimojjlkmoijpicakmndhoigimigcmbb,hnimpnehoodheedghdeeijklkeaacbdc,hfnkpimlhhgieaddgfemjhofmfblmnib,khaoiebndkojlmppeemjhbpbandiljpe,aemomkdncapdnfajjbbcbdebjljbpmpj,giekcmmlnklenlaomppkphknjmnnpneh,ggkkehgbnfjpeggfpleeakpidbkibbmn,gkmgaooipdjhmangpemjhigmamcehddo,copjbmjbojbakpaedmpkhmiplmmehfck,bklopemakmnopmghhmccadeonafabnal,ehgidpndbllacpjalkiimkbadgjfnnmc,gcmjkmgdlgnkkcocmoeiminaijmmjnii,"
		"jflookgnkcckhobaglndicnbbgbonegd");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-83.0.4103.97");

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=10:1026557200&cup2hreq=8daa94346e15deca943ab3f67972d1ad29d023b0eeb8da3657397b4f390f224a", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t40.inf", 
		"Mode=HTTP", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx2,crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{8ee43ef9-e49f-4e4d-9c77-2a115f55cb0d}\",\"rd\":4915},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{f3bfdf47-8d54-47b8-a88f-5cd7dc0be14f}\",\"rd\":4915},\"updatecheck\":{},\""
		"version\":\"0.0.0.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{ee0afaca-8a80-41c7-a873-3e6f3e1bb62b}\",\"rd\":4915},\"updatecheck\":{},\"version\":\"4.10.1679.0\"},{\"appid\":\"mimojjlkmoijpicakmndhoigimigcmbb\",\"brand\":\"GCEU\",\"cohort\":\"1:d0j:\",\"cohorthint\":\"Chrome [M50+]\",\"cohortname\":\"Chrome [M50+]\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.8962baf052b75de7e61b9e134a6d48c4c269a48c1249d16747f2f608c73bcf90\"}]},\"ping\":{\"ping_freshness\":\"{3a90d75c-d739-4240-b954-d2baebaa57a3}\",\"rd\":4915},\"updatecheck\":{},\"version\":\"32.0.0.387\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\"brand\":\"GCEU\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{fd37ac11-08da-40e0-8e03-e1bca06ca827}\",\"rd\":4915},\"updatecheck\":{},"
		"\"version\":\"0.57.44.2492\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GCEU\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.0e5b31c9ba120d492f94f117b47dd7bc554216e3ffb7c24c4995a028dfc7c4f4\"}]},\"ping\":{\"ping_freshness\":\"{90f11089-211b-4181-9765-e533bee99ea4}\",\"rd\":4915},\"updatecheck\":{},\"version\":\"5938\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GCEU\",\"cohort\":\"1"
		":cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.5cb8df53fe2b86bf838ea2c9ffc3d5ef8460f679a779ac8aa924b5afffd052cb\"}]},\"ping\":{\"ping_freshness\":\"{411f594e-8abd-4cfb-82e1-1f5060861506}\",\"rd\":4915},\"updatecheck\":{},\"version\":\"42\"},{\"appid\":\"aemomkdncapdnfajjbbcbdebjljbpmpj\",\"brand\":\"GCEU\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{48f0dd4b-f04f-4d71-a723-1bad7f844a53}\",\"rd\":4915},\"updatecheck\":{},\""
		"version\":\"1.0.5.0\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GCEU\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{beb98292-7b60-4a9f-98b9-2a7106a5549c}\",\"rd\":4915},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GCEU\",\"cohort\":\"1:ut9"
		":vox@0.01\",\"cohorthint\":\"M80ToM89\",\"cohortname\":\"M80ToM89\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.9fbf27ac6ca2d1c8e065e68b8fd7ca789342b27ab56f3eb4b9a05b87faf43ebb\"}]},\"ping\":{\"ping_freshness\":\"{a44a140f-4a44-45d1-869c-63d434a2bbd1}\",\"rd\":4915},\"updatecheck\":{},\"version\":\"2020.6.2.834\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"GCEU\",\"cohort\":\"1:pw3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\""
		"package\":[{\"fp\":\"1.f3259d473a170eeb3c5d0060c4b928bcbb4b4a0ed6e14f5f5c4148596fcc0356\"}]},\"ping\":{\"ping_freshness\":\"{4dc46d6f-b62f-4e4f-adcb-7daf6efbac31}\",\"rd\":4915},\"tag\":\"eset_exp_b\",\"updatecheck\":{},\"version\":\"83.237.200\"},{\"appid\":\"copjbmjbojbakpaedmpkhmiplmmehfck\",\"brand\":\"GCEU\",\"cohort\":\"1:p1x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.207921137eee9c0831e0bd890330986c10dfd9382034491b82de3f86ae6915f7\"}]},\"ping\":{\"ping_freshness\":\"{6839851b-b5a0-42e2-89c7-9093a902b8fa}\",\"rd\":4915},\"updatecheck\":{},\"version\":\"2018.9.6.0\"},{\"appid\":\"bklopemakmnopmghhmccadeonafabnal\",\"brand\":\"GCEU\",\"cohort\":\"1:swl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6dce22b9a11fa1e62b22559c4a157ce745e7fc63c6c6941a82cf11e8ecf65b0e\"}]},\"ping\":{\"ping_freshness\":\""
		"{a514e55c-c66f-4331-8a73-6a0aad124bfa}\",\"rd\":4915},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GCEU\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{545a96d5-834f-4891-9a3e-2b96ec135c45}\",\"rd\":4915},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\""
		"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GCEU\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54ToM99\",\"cohortname\":\"M54ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.e0ea8f511064e3392d4315f9d2ecd81bfc5056347fe0b34d1e68b4a415599962\"}]},\"ping\":{\"ping_freshness\":\"{977d6250-7f24-47f3-bd0c-18113034bb6c}\",\"rd\":4915},\"updatecheck\":{},\"version\":\"9.12.0\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GCEU\",\"cohort\":\"1:s7x:\",\"cohorthint\":\""
		"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6c1ca4b9f577ca1466e080ead9807482c5386bfa83ee5f4d3ff50051f9a2f31c\"}]},\"ping\":{\"ping_freshness\":\"{738a388c-4935-45da-b149-a657dfa13e04}\",\"rd\":4915},\"updatecheck\":{},\"version\":\"1421\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"physmemory\":16},\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.17763.1282\"},\""
		"prodversion\":\"83.0.4103.97\",\"protocol\":\"3.1\",\"requestid\":\"{c0327a22-c01b-4ccd-aa10-3e3a8630b4d7}\",\"sessionid\":\"{f55f1a9d-4702-4dda-ad33-a2660c4d65a2}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.35.452\"},\"updaterversion\":\"83.0.4103.97\"}}", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_url("customise-jquery-idleTimeout-6286fe026bdf78a6c38a29cfd8d979c8.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/jquery/customise-jquery-idleTimeout-6286fe026bdf78a6c38a29cfd8d979c8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t41.inf", 
		LAST);

	web_url("jquery.core-2c7cdf128b42d849235dea8cadd879b8.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/jquery.core-2c7cdf128b42d849235dea8cadd879b8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t42.inf", 
		LAST);

	web_url("store.modern.min-ee86dbde67356086e53dffdd31c6867d.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/store.modern.min-ee86dbde67356086e53dffdd31c6867d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t43.inf", 
		LAST);

	web_url("jquery.app-782d8f87ac279a019b37b18a315654b2.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/jquery.app-782d8f87ac279a019b37b18a315654b2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t44.inf", 
		LAST);

	web_url("deleteModal-68b8e74283c8070801d2afbaf40831a1.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/deleteModal-68b8e74283c8070801d2afbaf40831a1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t45.inf", 
		LAST);

	web_add_header("Origin", 
		"https://pvr-perf.rxlogix.com");

	web_concurrent_start(NULL);

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer=https://pvr-perf.rxlogix.com/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t46.inf", 
		LAST);

	web_add_header("Origin", 
		"https://pvr-perf.rxlogix.com");

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://pvr-perf.rxlogix.com/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t47.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_auto_header("Sec-Fetch-Dest", 
		"style");

	web_url("fullcalendar.print-5e9985f0185898b586ec4820f63bb446.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/fullcalendar.print-5e9985f0185898b586ec4820f63bb446.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t48.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("32180", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/32180?_=1592376326798", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t49.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIYCVPhSdfTl0OFEgsNjw8fixIAGgAiABoAEs4BCWbPMLGRU9eNEgsN3j-TvhIAGgAiABILDVAOKOsSABoAIgASCw3QcSOwEgAaACIAEgsN8axL0RIAGgAiABILDXOr8B8SABoAIgASCw3JlP8vEgAaACIAEgsNqtu3jBIAGgAiABILDZxy4rcSABoAIgASCw1SAuMKEgAaACIAEgsNkcnz6RIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRIYCVPhSdfTl0OFEgsNjw8fixIAGgAiABoAEs4BCWbPMLGRU9eNEgsN3j-TvhIAGgAiABILDVAOKOsSABoAIgASCw3QcSOwEgAaACIAEgsN8axL0RIAGgAiABILDXOr8B8SABoAIgASCw3JlP8vEgAaACIAEgsNqtu3jBIAGgAiABILDZxy4rcSABoAIgASCw1SAuMKEgAaACIAEgsNkcnz6RIAGgAiABILDSITCW4SABoAIgASCw0EnDWHEgAaACIAEgsNAxRoVxIAGgAiABILDSeO13kSABoAIgASCw09LLzYEgAaACIAGgASPwmScaNDN_x9xRILDYoEHBMSABoAIgASCw3Cldn3EgAaACIAEgsNwpXZ9xIAGgAiABILDT0svNgSABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t50.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("latestAdhocReport", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportResultRest/latestAdhocReport?length=4&start=0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t51.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("index", 
		"URL=https://pvr-perf.rxlogix.com/reports/actionItemRest/index?length=5&start=0&sort=dueDate&direction=asc", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t52.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("latestPeriodicReport", 
		"URL=https://pvr-perf.rxlogix.com/reports/periodicReportConfigurationRest/latestPeriodicReport?length=4&start=0", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t53.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("info", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t54.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("dataTables_en.json", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/dataTables_en.json?_=1592376326799", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t55.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("dataTables_en.json_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/dataTables_en.json?_=1592376326800", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t56.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("Accept");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_url("websocket", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/473/m66gwb7a/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t57.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("Rep11_T02_Login",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("Rep11_T03_NavigateAdhocReport_NewReport");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("create", 
		"URL=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/dashboard/index", 
		"Snapshot=t58.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_concurrent_start(NULL);

	web_url("tags-0a636c4c7bc5e4dd91c0e4e6d1889215.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/tags-0a636c4c7bc5e4dd91c0e4e6d1889215.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t59.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("templateQueries-b30e257e7bf112701696b0edaac3908d.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/templateQueries-b30e257e7bf112701696b0edaac3908d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t60.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("scheduler-293bc77ad497c01ec53bcb2f97095e6b.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/scheduler-293bc77ad497c01ec53bcb2f97095e6b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t61.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("dateRange-114c7d1894185a1583d21cb5f436038a.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/dateRange-114c7d1894185a1583d21cb5f436038a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t62.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("blankParameters-cef91892ccdf31d55934699882b389d5.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/blankParameters-cef91892ccdf31d55934699882b389d5.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t63.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("deliveryOption-15dc8d9c9cd9dc9e6c9c50d8091bed20.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/deliveryOption-15dc8d9c9cd9dc9e6c9c50d8091bed20.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t64.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("configurationCommon-1c4332f2cce7a50d32a9bb863277106f.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/configurationCommon-1c4332f2cce7a50d32a9bb863277106f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t65.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("expandingTextarea-e6f68bca81423576f208f67bb1a470d2.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/expandingTextarea-e6f68bca81423576f208f67bb1a470d2.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t67.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("emailConfiguration-59c065e4239f87a883e747de81101001.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/emailConfiguration-59c065e4239f87a883e747de81101001.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t68.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("copyPasteValues-ce01bd4ac74470f921a5bf1d8f9b8c0d.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/copyPasteValues-ce01bd4ac74470f921a5bf1d8f9b8c0d.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t69.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("expandingTextarea-04fa51fd39d03f48f1fbbac3953c97b8.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/expandingTextarea-04fa51fd39d03f48f1fbbac3953c97b8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t70.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("configuration-11b5b002dec2c8f1f643a1db6b80c6db.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/configuration-11b5b002dec2c8f1f643a1db6b80c6db.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t71.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("copyPasteModal-e538fdadfa9bb40beefda62316b6268f.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/copyPasteModal-e538fdadfa9bb40beefda62316b6268f.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t72.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("disableAutocomplete-4b64c67585270722b33b13c06f9e5327.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/disableAutocomplete-4b64c67585270722b33b13c06f9e5327.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t73.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t74.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("If-None-Match", 
		"\"i18n/en-18c4077eb5eb1e809fd3816dcdcf9f60.json\"");

	web_url("en.json_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t66.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_url("dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/dictionaries-28bdb28ccc79e1b54cfb9c2a829ce561.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t75.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("dictionaries-a56723bc475dc0f60ed4e82cb965de2a.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/dictionaries-a56723bc475dc0f60ed4e82cb965de2a.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t76.inf", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("Sec-Fetch-Dest", 
		"script");

	web_url("dictionaryMultiSearch-6eb3fdf8ab4860190935c80f93a691c7.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/dictionaryMultiSearch-6eb3fdf8ab4860190935c80f93a691c7.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t77.inf", 
		LAST);

	web_url("studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/studyCompounds-d1264ac301b89c2be214faf502830ceb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t78.inf", 
		LAST);

	web_url("studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/studyDrugs-9650caca7b2eaad47de57af7bbefe066.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t79.inf", 
		LAST);

	web_url("productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/productDictionary-eeaadfef73b9e8aa3d5bbccd020fbe0e.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t80.inf", 
		LAST);

	web_url("emailAttachmentSplit-1cfd9a05e7b65820432d627f850295f6.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/emailAttachmentSplit-1cfd9a05e7b65820432d627f850295f6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t81.inf", 
		LAST);

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer=https://pvr-perf.rxlogix.com/reports/assets/application-3d100486bb60d4ee3003d4ee9f8d893e.css", 
		"Snapshot=t82.inf", 
		LAST);

	web_url("emailModal-c328f6452c15ee5b9612d5799369da83.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/emailModal-c328f6452c15ee5b9612d5799369da83.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t83.inf", 
		LAST);

	web_url("emailTemplateEditor-340a1a96d629c756ba1192ca0bec7179.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/emailTemplateEditor-340a1a96d629c756ba1192ca0bec7179.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t84.inf", 
		LAST);

	web_url("tinymce.min-8913ae2d8b5e63961b59cb681291410b.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/tinymce.min-8913ae2d8b5e63961b59cb681291410b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t85.inf", 
		LAST);

	web_add_header("If-None-Match", 
		"\"plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html\"");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("column-view-64c0085c608464f4a6f66e33d985ae27.html_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/column-view-64c0085c608464f4a6f66e33d985ae27.html", 
		"Resource=0", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t86.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("fetchEvaluateCaseDateSubmissionForDatasource", 
		"URL=https://pvr-perf.rxlogix.com/reports/configurationRest/fetchEvaluateCaseDateSubmissionForDatasource?dataSourceId=6594", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t87.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("getDateOperators", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getDateOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t88.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getStringOperators", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getStringOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t89.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("fetchEvaluateCaseDatesForDatasource", 
		"URL=https://pvr-perf.rxlogix.com/reports/configurationRest/fetchEvaluateCaseDatesForDatasource?showAllversions=true&dataSourceId=6594", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t90.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("allEmailsForCC", 
		"URL=https://pvr-perf.rxlogix.com/reports/email/allEmailsForCC?emails=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t91.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("allEmails", 
		"URL=https://pvr-perf.rxlogix.com/reports/email/allEmails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t92.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("fetchDateRangeTypesForDatasource", 
		"URL=https://pvr-perf.rxlogix.com/reports/configurationRest/fetchDateRangeTypesForDatasource?dataSourceId=6594", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t93.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("getNumOperators", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getNumOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t94.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getValuelessOperators", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/getValuelessOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t95.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("32180_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/32180?_=1592376376358", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t96.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("sharedWithValues", 
		"URL=https://pvr-perf.rxlogix.com/reports/userRest/sharedWithValues?ids=User_32180", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t97.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_url("polymer.html", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t98.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("info_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t99.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_concurrent_start(NULL);

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRK3CQlH4ax9b72jMhILDczXnOUSABoAIgASCw211b0TEgAaACIAEgsNJBTbIxIAGgAiABILDSocjqcSABoAIgASCw2d1N0CEgAaACIAEgsNWjZWbRIAGgAiABILDQU15ScSABoAIgASCw0SYUEEEgAaACIAEgsNgZfjuBIAGgAiABILDVkeLPgSABoAIgASCw33ymTpEgAaACIAEgsN1QYjmRIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/"
		"Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRK3CQlH4ax9b72jMhILDczXnOUSABoAIgASCw211b0TEgAaACIAEgsNJBTbIxIAGgAiABILDSocjqcSABoAIgASCw2d1N0CEgAaACIAEgsNWjZWbRIAGgAiABILDQU15ScSABoAIgASCw0SYUEEEgAaACIAEgsNgZfjuBIAGgAiABILDVkeLPgSABoAIgASCw33ymTpEgAaACIAEgsN1QYjmRIAGgAiABILDc9pZ9ISABoAIgASCw3On7MLEgAaACIAEgsN4p4LnBIAGgAiABILDTEG0LgSABoAIgASCw3Xd0_gEgAaACIAEgsNfvGzyBIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2RYZVOEgAaACIAEg"
		"sNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw2skrH0EgAaACIAEgsN2lTdmBIAGgAiABILDZmNgmwSABoAIgASCw396NOPEgAaACIAEgsNxe2BBRIAGgAiABILDelEMo4SABoAIgASCw2RYZVOEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw0G7bv_EgAaACIAEgsN3j-TvhIAGgAiABILDVAOKOsSABoAIgASCw3yHtuNEgAaACIAEgsNWWF3nBIAGgAiABILDabSosASABoAIgASCw3xrEvREgAaACIAEgsNc6vwHxIAGgAiABILDQScNYcSABoAIgASCw0DFGhXEgAaACIAEgsNE3wgqhIAGgAiABILDarbt4wSABoAIgASCw2ccuK3EgAaACIAEgsNKqQ1BBIAGgAiABILDQ_XIIQSABoAIgASCw0EC1hbEgAaACIAEgsNJcUlQBIAGgAiABILDS9GjnISABoAIgAS"
		"Cw2DwMWpEgAaACIAEgsNbT6xfxIAGgAiABILDT0svNgSABoAIgASCw2j1FFmEgAaACIAEgsNxnwsFRIAGgAiABILDcoMPYwSABoAIgASCw269TEaEgAaACIAEgsNU9kIURIAGgAiABILDX1Nc4YSABoAIgASCw1XXt0oEgAaACIAEgsNHc-rrhIAGgAiABILDZ-hqZYSABoAIgASCw2RYZVOEgAaACIAEgsN3M6LDhIAGgAiABILDdzOiw4SABoAIgASCw3czosOEgAaACIAEgsN3M6LDhIAGgAiABILDdzOiw4SABoAIgASCw0462PLEgAaACIAEgsNJY8Z5RIAGgAiABILDSWPGeUSABoAIgASCw0HzP3tEgAaACIAEgsNkWGVThIAGgAiABILDZFhlU4SABoAIgASCw3NqOapEgAaACIAEgsN-wUfuBIAGgAiABILDcWSLxESABoAIgASCw05EawNEgAaACIAEgsN9f7ojBIAGgAiAB"
		"ILDbbzYAcSABoAIgASCw1ZjMuyEgAaACIAEgsNBJXdkxIAGgAiABILDYrTNyoSABoAIgASCw3cNz2aEgAaACIAEgsNkWGVThIAGgAiABILDQbtu_8SABoAIgASCw2eKNBTEgAaACIAGgA=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t100.inf", 
		LAST);

	web_url("theme.min.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/themes/modern/theme.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t101.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("polymer-mini.html", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer-mini.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t102.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("polymer-micro.html", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/polymer-micro.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t103.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("plugin.min.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/image/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t104.inf", 
		LAST);

	web_url("plugin.min.js_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/table/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t105.inf", 
		LAST);

	web_url("plugin.min.js_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/link/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t106.inf", 
		LAST);

	web_url("plugin.min.js_4", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/imagetools/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t107.inf", 
		LAST);

	web_url("plugin.min.js_5", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/plugins/code/plugin.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t108.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_revert_auto_header("Accept");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("Upgrade", 
		"websocket");

	web_url("websocket_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/598/58152pss/websocket", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t109.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_concurrent_start(NULL);

	web_url("skin.min.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/skins/lightgray/skin.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t110.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("content.min.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/tinymce/skins/lightgray/content.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t111.inf", 
		LAST);

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"style");

	web_url("editor-687e49e2901f89d1e65cc77026ec0a3e.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/editor-687e49e2901f89d1e65cc77026ec0a3e.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t112.inf", 
		LAST);

	web_add_header("Accept", 
		"*/*");

	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"script");

	web_url("column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/plugin/dictionary/column-view-lib-bd7bc6ac60142802df527fb4fdd3a579.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t113.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("Rep11_T03_NavigateAdhocReport_NewReport",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("Rep11_T04_ClickProductLookUp");

	lr_end_transaction("Rep11_T04_ClickProductLookUp",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("Rep11_T05_SearchProduct");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-CSRF-TOKEN", 
		"20c4e0c6-e16b-44f4-b559-e9c057111ac8");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("searchViews", 
		"Action=https://pvr-perf.rxlogix.com/reports/productDictionary/searchViews", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t114.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=contains", "Value=prednisolone", ENDITEM, 
		"Name=dictionaryLevel", "Value=1", ENDITEM, 
		"Name=ref_level", "Value=", ENDITEM, 
		"Name=exact_search", "Value=false", ENDITEM, 
		"Name=imp", "Value=false", ENDITEM, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=filters", "Value={}", ENDITEM, 
		LAST);

	web_custom_request("getSelectedItem", 
		"URL=https://pvr-perf.rxlogix.com/reports/productDictionary/getSelectedItem?productId=112507&dataSource=pva&dictionaryLevel=1&currentLang=en", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t115.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	web_add_header("X-HTTP-Method-Override", 
		"POST");

	web_url("threatListUpdates_fetch", 
		"URL=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"ChwKDGdvb2dsZWNocm9tZRIMODMuMC40MTAzLjk3GikIBRABGhsKDQgFEAYYASIDMDAxMAEQ8-EIGgIYB-0SmpIiBCABIAIoARopCAEQARobCg0IARAGGAEiAzAwMTABEIDCBxoCGAdKeiBeIgQgASACKAEaKQgDEAEaGwoNCAMQBhgBIgMwMDEwARDqyQcaAhgHV0m-NCIEIAEgAigBGikIBxABGhsKDQgHEAYYASIDMDAxMAEQ18wHGgIYB60FEMoiBCABIAIoARonCAEQARoZCg0IARAGGAEiAzAwMTADEBQaAhgHMbHJSCIEIAEgAigDGigIARAIGhoKDQgBEAgYASIDMDAxMAQQvBoaAhgHJb7XwyIEIAEgAigEGicICRABGhkKDQgJEAYYASIDMDAxMAYQAxoCGAd8Zz-3IgQgASACKAYaKAgPEAEaGgoNCA8QBhgBIgMwMDEwARC5LxoCGAeXXSaXIgQgASACKAEaJwgKEAgaGQ"
		"oNCAoQCBgBIgMwMDEwARAFGgIYB6oISBciBCABIAIoARonCAkQARoZCg0ICRAGGAEiAzAwMTABEBwaAhgHzMrPKCIEIAEgAigBGigICBABGhoKDQgIEAYYASIDMDAxMAEQjgkaAhgHQEOlmiIEIAEgAigBGigIDRABGhoKDQgNEAYYASIDMDAxMAEQ9HQaAhgHkLIULCIEIAEgAigBGikIDhABGhsKDQgOEAYYASIDMDAxMAEQ_-QDGgIYB83vNdsiBCABIAIoARooCBAQARoaCg0IEBAGGAEiAzAwMTABEOYDGgIYBxUKkuQiBCABIAIoASICCAE=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t116.inf", 
		LAST);

	web_submit_data("getPreLevelProductParents", 
		"Action=https://pvr-perf.rxlogix.com/reports/productDictionary/getPreLevelProductParents", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t117.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=dataSource", "Value=pva", ENDITEM, 
		"Name=dictionaryLevel", "Value=1", ENDITEM, 
		"Name=currentLang", "Value=en", ENDITEM, 
		"Name=productIds", "Value=112507", ENDITEM, 
		LAST);

	lr_end_transaction("Rep11_T05_SearchProduct",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("Rep11_T06_SelectProduct");

	lr_end_transaction("Rep11_T06_SelectProduct",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("Rep11_T07_SelectReportTemplate");

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-CSRF-TOKEN");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("keep-alive", 
		"URL=https://pvr-perf.rxlogix.com/reports/keep-alive?_=1592376376359", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t118.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("getTemplateList", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateList?term=&page=1&max=30&oldSelectedValue=&_=1592376376360", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t119.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getTemplateList_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/reportTemplateRest/getTemplateList?term=Narrative+Listing&page=1&max=30&oldSelectedValue=&_=1592376376361", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t120.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("customSQLValuesForTemplate", 
		"URL=https://pvr-perf.rxlogix.com/reports/template/customSQLValuesForTemplate?templateId=23856&_=1592376376362", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t121.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("poiInputsForTemplate", 
		"URL=https://pvr-perf.rxlogix.com/reports/template/poiInputsForTemplate?templateId=23856&_=1592376376363", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t122.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("Rep11_T07_SelectReportTemplate",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("Rep11_T08_SelectReportQuery");

	web_url("getQueryList", 
		"URL=https://pvr-perf.rxlogix.com/reports/queryRest/getQueryList?isQueryTargetReports=true&term=&page=1&max=30&oldSelectedValue=&_=1592376376364", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t123.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("getQueryList_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/queryRest/getQueryList?isQueryTargetReports=true&term=Fatal+and+LT+cases&page=1&max=30&oldSelectedValue=&_=1592376376365", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t124.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("queryExpressionValuesForQuery", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/queryExpressionValuesForQuery?queryId=28598&_=1592376376366", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t125.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("customSQLValuesForQuery", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/customSQLValuesForQuery?queryId=28598&_=1592376376367", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t126.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("queryExpressionValuesForQuerySet", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/queryExpressionValuesForQuerySet?queryId=28598&_=1592376376368", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t127.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("reportFieldsForQueryValue", 
		"URL=https://pvr-perf.rxlogix.com/reports/queryRest/reportFieldsForQueryValue?name=masterPbrerBucket&_=1592376376369", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t128.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=masterPbrerBucket&_=1592376376370", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t129.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("possibleValues_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/query/possibleValues?lang=en&field=masterPbrerBucket&_=1592376376371", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t130.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("Rep11_T08_SelectReportQuery",LR_AUTO);

	lr_think_time(3);

	web_add_auto_header("Accept", 
		"*/*");

	web_url("keep-alive_2", 
		"URL=https://pvr-perf.rxlogix.com/reports/keep-alive?_=1592376376372", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t131.inf", 
		"Mode=HTTP", 
		LAST);

	lr_start_transaction("Rep11_T09_SaveAndRun");

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Cache-Control", 
		"max-age=0");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("run", 
		"Action=https://pvr-perf.rxlogix.com/reports/configuration/run", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/configuration/create", 
		"Snapshot=t132.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=owner", "Value=32180", ENDITEM, 
		"Name=productSelection", "Value={\"1\":[{\"name\":\"prednisolone\",\"id\":\"112507\"}],\"2\":[],\"3\":[],\"4\":[]}", ENDITEM, 
		"Name=_suspectProduct", "Value=", ENDITEM, 
		"Name=studySelection", "Value=", ENDITEM, 
		"Name=eventSelection", "Value=", ENDITEM, 
		"Name=_limitPrimaryPath", "Value=", ENDITEM, 
		"Name=JSONExpressionValues", "Value=", ENDITEM, 
		"Name=dateRangeType.id", "Value=1", ENDITEM, 
		"Name=sourceProfile.id", "Value=6594", ENDITEM, 
		"Name=evaluateDateAsNonSubmission", "Value=VERSION_ASOF", ENDITEM, 
		"Name=evaluateDateAsSubmissionDate", "Value=LATEST_VERSION", ENDITEM, 
		"Name=evaluateDateAs", "Value=VERSION_ASOF", ENDITEM, 
		"Name=asOfVersionDate", "Value=17-Jun-2020", ENDITEM, 
		"Name=useCaseSeries", "Value=", ENDITEM, 
		"Name=_excludeFollowUp", "Value=", ENDITEM, 
		"Name=_includeLockedVersion", "Value=", ENDITEM, 
		"Name=_includeAllStudyDrugsCases", "Value=", ENDITEM, 
		"Name=_excludeNonValidCases", "Value=", ENDITEM, 
		"Name=excludeNonValidCases", "Value=on", ENDITEM, 
		"Name=_includeMedicallyConfirmedCases", "Value=", ENDITEM, 
		"Name=_includeNonSignificantFollowUp", "Value=", ENDITEM, 
		"Name=_event_exactSearch", "Value=", ENDITEM, 
		"Name=_product_exactSearch", "Value=", ENDITEM, 
		"Name=_study_exactSearch", "Value=", ENDITEM, 
		"Name=studyDrugs", "Value=", ENDITEM, 
		"Name=_study_imp", "Value=", ENDITEM, 
		"Name=studyCompounds", "Value=", ENDITEM, 
		"Name=templateQueries[0].version", "Value=", ENDITEM, 
		"Name=templateQueries[0].id", "Value=", ENDITEM, 
		"Name=templateQueries[0].dynamicFormEntryDeleted", "Value=false", ENDITEM, 
		"Name=templateQueries[0].new", "Value=true", ENDITEM, 
		"Name=templateQueries[0].template", "Value=23856", ENDITEM, 
		"Name=templateQueries[0].header", "Value=", ENDITEM, 
		"Name=templateQueries[0].title", "Value=", ENDITEM, 
		"Name=templateQueries[0].footer", "Value=", ENDITEM, 
		"Name=templateQueries[_clone]._headerProductSelection", "Value=", ENDITEM, 
		"Name=templateQueries[_clone]._headerDateRange", "Value=", ENDITEM, 
		"Name=templateQueries[_clone]._displayMedDraVersionNumber", "Value=", ENDITEM, 
		"Name=templateQueries[_clone]._privacyProtected", "Value=", ENDITEM, 
		"Name=templateQueries[_clone]._blindProtected", "Value=", ENDITEM, 
		"Name=templateQueries[0].query", "Value=28598", ENDITEM, 
		"Name=templateQueries[0].queryLevel", "Value=CASE", ENDITEM, 
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeEnum", "Value=CUSTOM", ENDITEM, 
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.relativeDateRangeValue", "Value=1", ENDITEM, 
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeStartAbsolute", "Value=01-Jan-2017", ENDITEM, 
		"Name=templateQueries[0].dateRangeInformationForTemplateQuery.dateRangeEndAbsolute", "Value=31-Dec-2019", ENDITEM, 
		"Name=templateQuery0.qev[0].field", "Value=masterPbrerBucket", ENDITEM, 
		"Name=templateQuery0.qev[0].operator", "Value=EQUALS", ENDITEM, 
		"Name=templateQuery0.qev[0].copyPasteValue", "Value=", ENDITEM, 
		"Name=selectSelectAuto", "Value=", ENDITEM, 
		"Name=selectDate", "Value=17-Jun-2020", ENDITEM, 
		"Name=delimitertemplateQuery0qev0", "Value=none", ENDITEM, 
		"Name=templateQuery0.qev[0].value", "Value=", ENDITEM, 
		"Name=templateQuery0.qev[0].key", "Value=1", ENDITEM, 
		"Name=templateQuery0.qev[0].specialKeyValue", "Value=", ENDITEM, 
		"Name=templateQuery0.qev[0].isFromCopyPaste", "Value=", ENDITEM, 
		"Name=templateQueries[0].validQueries", "Value=28598", ENDITEM, 
		"Name=reportName", "Value=R11_0001", ENDITEM, 
		"Name=description", "Value=R11_0001", ENDITEM, 
		"Name=_qualityChecked", "Value=", ENDITEM, 
		"Name=_isTemplate", "Value=", ENDITEM, 
		"Name=sharedWith", "Value=User_32180", ENDITEM, 
		"Name=TimeZoneSelectlist", "Value=", ENDITEM, 
		"Name=intervalSelectlist", "Value=none", ENDITEM, 
		"Name=monthlySelectlist", "Value=1", ENDITEM, 
		"Name=repeat-monthly", "Value=bysetpos", ENDITEM, 
		"Name=monthlySelectlist", "Value=1", ENDITEM, 
		"Name=monthlySelectlist", "Value=SU", ENDITEM, 
		"Name=repeat-yearly", "Value=bymonthday", ENDITEM, 
		"Name=monthlySelectlist", "Value=1", ENDITEM, 
		"Name=monthlySelectlist", "Value=1", ENDITEM, 
		"Name=yearlyDateSelectlist", "Value=1", ENDITEM, 
		"Name=yearlyDaySelectlist", "Value=SU", ENDITEM, 
		"Name=yearlyDaySelectlist", "Value=1", ENDITEM, 
		"Name=EndSelectlist", "Value=never", ENDITEM, 
		"Name=isEnabled", "Value=true", ENDITEM, 
		"Name=schedulerTime", "Value=2020-06-17 06:46:11", ENDITEM, 
		"Name=scheduleDateJSON", "Value={\"startDateTime\":\"2020-06-17T06:46Z\",\"timeZone\":{\"text\":\"(GMT +00:00) UTC\\n                                \",\"selected\":true,\"offset\":\"+00:00\",\"name\":\"UTC\"},\"recurrencePattern\":\"FREQ=DAILY;INTERVAL=1;COUNT=1\"}", ENDITEM, 
		"Name=configSelectedTimeZone", "Value=UTC", ENDITEM, 
		"Name=timezone", "Value=name : UTC,offset : +00:00 ", ENDITEM, 
		"Name=deliveryOption._attachmentFormats", "Value=", ENDITEM, 
		"Name=deliveryOption._attachmentFormats", "Value=", ENDITEM, 
		"Name=deliveryOption._attachmentFormats", "Value=", ENDITEM, 
		"Name=deliveryOption._attachmentFormats", "Value=", ENDITEM, 
		"Name=deliveryOption.additionalAttachments", "Value=", ENDITEM, 
		"Name=ccValue", "Value=", ENDITEM, 
		"Name=subjectValue", "Value=", ENDITEM, 
		"Name=emailConfiguration.subject", "Value=", ENDITEM, 
		"Name=bodyValue", "Value=", ENDITEM, 
		"Name=emailConfiguration.body", "Value=", ENDITEM, 
		"Name=emailConfiguration._noEmailOnNoData", "Value=", ENDITEM, 
		"Name=noEmailOnNoDataValue", "Value=", ENDITEM, 
		"Name=emailConfiguration.pageOrientation", "Value=PORTRAIT", ENDITEM, 
		"Name=pageOrientationValue", "Value=PORTRAIT", ENDITEM, 
		"Name=emailConfiguration.paperSize", "Value=LETTER", ENDITEM, 
		"Name=paperSizeValue", "Value=LETTER", ENDITEM, 
		"Name=emailConfiguration.sensitivityLabel", "Value=SENSITIVE", ENDITEM, 
		"Name=sensitivityLabelValue", "Value=SENSITIVE", ENDITEM, 
		"Name=emailConfiguration._showPageNumbering", "Value=", ENDITEM, 
		"Name=emailConfiguration.showPageNumbering", "Value=on", ENDITEM, 
		"Name=showPageNumberingValue", "Value=true", ENDITEM, 
		"Name=emailConfiguration._showCompanyLogo", "Value=", ENDITEM, 
		"Name=emailConfiguration.showCompanyLogo", "Value=on", ENDITEM, 
		"Name=showCompanyLogoValue", "Value=true", ENDITEM, 
		"Name=emailConfiguration._excludeCriteriaSheet", "Value=", ENDITEM, 
		"Name=excludeCriteriaSheetValue", "Value=false", ENDITEM, 
		"Name=emailConfiguration._excludeAppendix", "Value=", ENDITEM, 
		"Name=excludeAppendixValue", "Value=false", ENDITEM, 
		"Name=emailConfiguration._excludeComments", "Value=", ENDITEM, 
		"Name=excludeCommentsValue", "Value=false", ENDITEM, 
		"Name=emailConfiguration._excludeLegend", "Value=", ENDITEM, 
		"Name=excludeLegendValue", "Value=false", ENDITEM, 
		"Name=emailTemplateName", "Value=", ENDITEM, 
		"Name=emailTemplateDescription", "Value=", ENDITEM, 
		"Name=templateBlanks", "Value=false", ENDITEM, 
		"Name=queryBlanks", "Value=false", ENDITEM, 
		"Name=schedulerFrom", "Value=createPage", ENDITEM, 
		"Name=editable", "Value=true", ENDITEM, 
		"Name=blankValuesJSON", "Value=", ENDITEM, 
		"Name=_csrf", "Value=20c4e0c6-e16b-44f4-b559-e9c057111ac8", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("handlebars-v4.0.11-5c362fdd07b93a39b600cea43165302f.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/handlebar/handlebars-v4.0.11-5c362fdd07b93a39b600cea43165302f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t133.inf", 
		LAST);

	web_url("executionStatus-0291e27b037d335048c8c802b3bd133c.css", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/executionStatus-0291e27b037d335048c8c802b3bd133c.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t135.inf", 
		LAST);

	web_url("pvr-common-util-8ff14af8a3772d2fcd9a8439fcb156fc.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/utils/pvr-common-util-8ff14af8a3772d2fcd9a8439fcb156fc.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t136.inf", 
		LAST);

	web_url("pvr-filter-util-f694134bedd0ac0ffc46cd24998d5f54.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/utils/pvr-filter-util-f694134bedd0ac0ffc46cd24998d5f54.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t137.inf", 
		LAST);

	web_url("executionStatus-abc243051811af7ce55db349117755f2.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/configuration/executionStatus-abc243051811af7ce55db349117755f2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t138.inf", 
		LAST);

	web_url("dataTablesActionButtons-dbaa4f19bed1b0ac11118699876720cb.js", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/dataTablesActionButtons-dbaa4f19bed1b0ac11118699876720cb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t139.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_header("If-None-Match", 
		"\"i18n/en-18c4077eb5eb1e809fd3816dcdcf9f60.json\"");

	web_url("en.json_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/en.json", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t134.inf", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("dataTables_en.json_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/i18n/dataTables_en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t140.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("datepicker.hbs", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/hbs-templates/datepicker.hbs", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t141.inf", 
		LAST);

	web_url("filter_panel.hbs", 
		"URL=https://pvr-perf.rxlogix.com/reports/assets/app/hbs-templates/filter_panel.hbs", 
		"Resource=1", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t142.inf", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRLoAQllYL_QY_F4qhILDa5G27QSABoAIgASCw0FY-BREgAaACIAEgsN46PAYhIAGgAiABILDQzy6RMSABoAIgASCw2RYZVOEgAaACIAEgsNgZDxfBIAGgAiABILDarbt4wSABoAIgASCw2ccuK3EgAaACIAEgsNkWGVThIAGgAiABILDfGsS9ESABoAIgASCw1zq_AfEgAaACIAEgsNlJCS-hIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRLoAQllYL_QY_F4qhILDa5G27QSABoAIgASCw0FY-BREgAaACIAEgsN46PAYhIAGgAiABILDQzy6RMSABoAIgASCw2RYZVOEgAaACIAEgsNgZDxfBIAGgAiABILDarbt4wSABoAIgASCw2ccuK3EgAaACIAEgsNkWGVThIAGgAiABILDfGsS9ESABoAIgASCw1zq_AfEgAaACIAEgsNlJCS-hIAGgAiABILDZFhlU4SABoAIgASCw0GTls8EgAaACIAEgsNBk5bPBIAGgAiABILDYGQ8XwSABoAIgASCw2BkPF8EgAaACIAGgA=?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t143.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("32180_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/notificationRest/forUser/32180?_=1592376558568", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t144.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("executionStatus", 
		"URL=https://pvr-perf.rxlogix.com/reports/configurationRest/executionStatus?draw=1&columns%5B0%5D%5Bdata%5D=reportName&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=periodicReportType&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=true&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=version&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=executionStatus&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=false&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&"
		"columns%5B4%5D%5Bdata%5D=owner&columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=true&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=runDate&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=true&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=executionTime&columns%5B6%5D%5Bname%5D=&"
		"columns%5B6%5D%5Bsearchable%5D=true&columns%5B6%5D%5Borderable%5D=false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=frequency&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=sharedWith&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D="
		"false&columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=deliveryMedia&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=false&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=runDate&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=true&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=5&order%5B0%5D%5Bdir%5D=desc&start=0&length=50&search%5Bvalue%5D=&search%5Bregex%5D=false&tableFilter=%7B%7D&advancedFilter=false&sharedwith=&searchString=&direction=desc&sort=runDate&status=GENERATING&_=1592376558569", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t145.inf", 
		"Mode=HTTP", 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("info_3", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t146.inf", 
		"Mode=HTTP", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_concurrent_start(NULL);

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKCAglUdIEOo1MWhxILDa5G27QSABoAIgASCw0FY-BREgAaACIAEgsN4hsEvhIAGgAiABILDb2Fgw8SABoAIgASCw3jo8BiEgAaACIAEgsNDPLpExIAGgAiABILDZFhlU4SABoAIgASCw2BkPF8EgAaACIAEgsNqtu3jBIAGgAiABILDZxy4rcSABoAIgASCw2RYZVOEgAaACIAEgsN8axL0RIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKCAglUdIEOo1MWhxILDa5G27QSABoAIgASCw0FY-BREgAaACIAEgsN4hsEvhIAGgAiABILDb2Fgw8SABoAIgASCw3jo8BiEgAaACIAEgsNDPLpExIAGgAiABILDZFhlU4SABoAIgASCw2BkPF8EgAaACIAEgsNqtu3jBIAGgAiABILDZxy4rcSABoAIgASCw2RYZVOEgAaACIAEgsN8axL0RIAGgAiABILDXOr8B8SABoAIgASCw2UkJL6EgAaACIAEgsNkWGVThIAGgAiABILDQZOWzwSABoAIgASCw0GTls8EgAaACIAEgsNgZDxfBIAGgAiABILDYGQ8XwSABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t147.inf", 
		LAST);

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_url("Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKpAgnX6zQ3zjIUpxILDa5G27QSABoAIgASCw0FY-BREgAaACIAEgsN4hsEvhIAGgAiABILDeNr0NgSABoAIgASCw0LYtQYEgAaACIAEgsNDPLpExIAGgAiABILDbxTUjESABoAIgASCw3jo8BiEgAaACIAEgsNvYWDDxIAGgAiABILDZFhlU4SABoAIgASCw2BkPF8EgAaACIAEgsNqtu3jBIAGgAi", 
		"URL=https://content-autofill.googleapis.com/v1/pages/Chc2LjEuMTcxNS4xNDQyL2VuIChHR0xMKRKpAgnX6zQ3zjIUpxILDa5G27QSABoAIgASCw0FY-BREgAaACIAEgsN4hsEvhIAGgAiABILDeNr0NgSABoAIgASCw0LYtQYEgAaACIAEgsNDPLpExIAGgAiABILDbxTUjESABoAIgASCw3jo8BiEgAaACIAEgsNvYWDDxIAGgAiABILDZFhlU4SABoAIgASCw2BkPF8EgAaACIAEgsNqtu3jBIAGgAiABILDZxy4rcSABoAIgASCw2RYZVOEgAaACIAEgsN8axL0RIAGgAiABILDXOr8B8SABoAIgASCw2UkJL6EgAaACIAEgsNkWGVThIAGgAiABILDQZOWzwSABoAIgASCw0GTls8EgAaACIAEgsNgZDxfBIAGgAiABILDYGQ8XwSABoAIgAaAA==?alt=proto", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t148.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("xhr_streaming", 
		"URL=https://pvr-perf.rxlogix.com/reports/stomp/695/xnk78fjn/xhr_streaming", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t149.inf", 
		"Mode=HTTP", 
		"EncType=", 
		LAST);

	lr_end_transaction("Rep11_T09_SaveAndRun",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("Rep11_T10_Logout");

	web_add_header("X-HTTP-Method-Override", 
		"POST");

	web_concurrent_start(NULL);

	web_url("fullHashes_find", 
		"URL=https://safebrowsing.googleapis.com/v4/fullHashes_find?$req="
		"ChwKDGdvb2dsZWNocm9tZRIMODMuMC40MTAzLjk3EhsKDQgFEAYYASIDMDAxMAEQ8-EIGgIYB-0SmpISGwoNCAEQBhgBIgMwMDEwARCAwgcaAhgHSnogXhIbCg0IAxAGGAEiAzAwMTABEOrJBxoCGAdXSb40EhsKDQgHEAYYASIDMDAxMAEQ18wHGgIYB60FEMoSGQoNCAEQBhgBIgMwMDEwAxAUGgIYBzGxyUgSGgoNCAEQCBgBIgMwMDEwBBC8GhoCGAclvtfDEhkKDQgJEAYYASIDMDAxMAYQAxoCGAd8Zz-3EhoKDQgPEAYYASIDMDAxMAEQuS8aAhgHl10mlxIZCg0IChAIGAEiAzAwMTABEAUaAhgHqghIFxIZCg0ICRAGGAEiAzAwMTABEBwaAhgHzMrPKBIaCg0ICBAGGAEiAzAwMTABEI4JGgIYB0BDpZoSGgoNCA0QBhgBIgMwMDEwARD0dBoCGAeQshQsEhsKDQgOEAYYAS"
		"IDMDAxMAEQ_-QDGgIYB83vNdsSGgoNCBAQBhgBIgMwMDEwARDmAxoCGAcVCpLkGiwIAQgDCAUIBggHCAgICQgKCA0IDggPCBAQARAIGgYKBPZJR5IgASADIAQgBg==&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t150.inf", 
		LAST);

	web_add_header("X-HTTP-Method-Override", 
		"POST");

	web_url("fullHashes_find_2", 
		"URL=https://safebrowsing.googleapis.com/v4/fullHashes_find?$req="
		"ChwKDGdvb2dsZWNocm9tZRIMODMuMC40MTAzLjk3EhsKDQgFEAYYASIDMDAxMAEQ8-EIGgIYB-0SmpISGwoNCAEQBhgBIgMwMDEwARCAwgcaAhgHSnogXhIbCg0IAxAGGAEiAzAwMTABEOrJBxoCGAdXSb40EhsKDQgHEAYYASIDMDAxMAEQ18wHGgIYB60FEMoSGQoNCAEQBhgBIgMwMDEwAxAUGgIYBzGxyUgSGgoNCAEQCBgBIgMwMDEwBBC8GhoCGAclvtfDEhkKDQgJEAYYASIDMDAxMAYQAxoCGAd8Zz-3EhoKDQgPEAYYASIDMDAxMAEQuS8aAhgHl10mlxIZCg0IChAIGAEiAzAwMTABEAUaAhgHqghIFxIZCg0ICRAGGAEiAzAwMTABEBwaAhgHzMrPKBIaCg0ICBAGGAEiAzAwMTABEI4JGgIYB0BDpZoSGgoNCA0QBhgBIgMwMDEwARD0dBoCGAeQshQsEhsKDQgOEAYYAS"
		"IDMDAxMAEQ_-QDGgIYB83vNdsSGgoNCBAQBhgBIgMwMDEwARDmAxoCGAcVCpLkGiwIAQgDCAUIBggHCAgICQgKCA0IDggPCBAQARAIGgYKBPZJR5IgASADIAQgBg==&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", 
		"Resource=1", 
		"RecContentType=application/x-protobuf", 
		"Referer=", 
		"Snapshot=t151.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("logout", 
		"URL=https://pvr-perf.rxlogix.com/reports/logout", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://pvr-perf.rxlogix.com/reports/executionStatus/list", 
		"Snapshot=t152.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("Rep11_T10_Logout",LR_AUTO);

	lr_think_time(3);

	return 0;
}