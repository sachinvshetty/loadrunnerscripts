Action()
{

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_add_cookie("OGPC=19008374-2:19008076-2:; DOMAIN=accounts.google.com");

	web_add_cookie("ACCOUNT_CHOOSER=AFx_qI5nHFNfpvwuLGtIdHVzD8nSmtm29tCzUZi0JtprGU2tA6sK55lf2v1QC_bQLcXb3sMdkfI8ljBgcEY7sixI3ZXlBpgvrZ2uSCQKEDe-kOwWCUi8o4IQgwBN8wGNn_YtUtvXbSIQV7Axc8ABX_try7nF9oa_OQ; DOMAIN=accounts.google.com");

	web_add_cookie("GAPS=1:BOzCHDfZ6t3q63hJyU7-pa9akR507T2HE1Q6KxMGHjEfPrrYoWTp0OfNyGPalQGIsRDI1DRMfHEzn4ArbzxZHd9hG7CHbA:ABI_kx1U4z1W9Au1; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2018-10-19-5; DOMAIN=accounts.google.com");

	web_add_cookie("NID=146=P0eA-jD3s6wbUlBoNupsfcYe_DMAwLB83IxbhaTNFWAkmoymsZN5BnEY0F0L2zXCKVWSs6X5pMDUO5HfBEI9SFYhPp6rXmUwvdpt6jTZKPTeG5ehj8e2Oxog5Hnm_8l-NM69b4aNpxKtHIr0Fm47q69xuGNBTVEPgPMG5VNTTwA8KustYwTgqPXEd5U; DOMAIN=accounts.google.com");

	web_add_header("Origin", 
		"https://www.google.com");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=durations_metrics,counter:0,load_time_ms:969&json=standard", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_url("seed", 
		"URL=http://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=70", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("jpetstore.cfapps.io", 
		"URL=https://jpetstore.cfapps.io/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("Jpetstore_enter_the_store");

	/* enter the  store link */

	web_revert_auto_header("Upgrade-Insecure-Requests");

	lr_think_time(72);

	web_url("Enter the Store", 
		"URL=https://jpetstore.cfapps.io/catalog", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://jpetstore.cfapps.io/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://safebrowsing.googleapis.com/v4/fullHashes:find?$req="
		"ChwKDGdvb2dsZWNocm9tZRIMNzAuMC4zNTM4Ljc3EhkKDQgBEAYYASIDMDAxMAMQFBoCGAshVuG7EhsKDQgFEAYYASIDMDAxMAEQq7MFGgIYC4a2IwESGQoNCAkQBhgBIgMwMDEwBhACGgIYC-NhoCoSGwoNCAEQBhgBIgMwMDEwARDWjQUaAhgLgUxVOhIbCg0IAxAGGAEiAzAwMTABEOCRBRoCGAs157gFEhoKDQgBEAgYASIDMDAxMAQQ-BQaAhgLCVWWGxIbCg0IBxAGGAEiAzAwMTABELydBBoCGAsQKhm5EhkKDQgKEAgYASIDMDAxMAEQBRoCGAsjd4_qEhkKDQgPEAYYASIDMDAxMAEQDBoCGAs6iAvYEhkKDQgJEAYYASIDMDAxMAEQCxoCGAtqpcvLEhoKDQgIEAYYASIDMDAxMAEQsQQaAhgLFIHj4xIaCg0IDRAGGAEiAzAwMTABENccGgIYCxzBVQQSGgoNCA4QBhgBIg"
		"MwMDEwARCUPhoCGAvjrS_bGioIAQgDCAUIBggHCAgICQgKCA0IDggPEAEQCBoGCgT7gPdVIAEgAyAEIAY=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates:fetch?$req="
		"ChwKDGdvb2dsZWNocm9tZRIMNzAuMC4zNTM4Ljc3GicIARABGhkKDQgBEAYYASIDMDAxMAMQFBoCGAshVuG7IgQgASACKAMaKQgFEAEaGwoNCAUQBhgBIgMwMDEwARCrswUaAhgLhrYjASIEIAEgAigBGicICRABGhkKDQgJEAYYASIDMDAxMAYQAhoCGAvjYaAqIgQgASACKAYaKQgBEAEaGwoNCAEQBhgBIgMwMDEwARDWjQUaAhgLgUxVOiIEIAEgAigBGikIAxABGhsKDQgDEAYYASIDMDAxMAEQ4JEFGgIYCzXnuAUiBCABIAIoARooCAEQCBoaCg0IARAIGAEiAzAwMTAEEPgUGgIYCwlVlhsiBCABIAIoBBopCAcQARobCg0IBxAGGAEiAzAwMTABELydBBoCGAsQKhm5IgQgASACKAEaJwgKEAgaGQoNCAoQCBgBIgMwMDEwARAFGgIYCyN3j-oiBCABIAIoARonCA8QARoZCg"
		"0IDxAGGAEiAzAwMTABEAwaAhgLOogL2CIEIAEgAigBGicICRABGhkKDQgJEAYYASIDMDAxMAEQCxoCGAtqpcvLIgQgASACKAEaKAgIEAEaGgoNCAgQBhgBIgMwMDEwARCxBBoCGAsUgePjIgQgASACKAEaKAgNEAEaGgoNCA0QBhgBIgMwMDEwARDXHBoCGAscwVUEIgQgASACKAEaKAgOEAEaGgoNCA4QBhgBIgMwMDEwARCUPhoCGAvjrS_bIgQgASACKAEiAggB&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
		LAST);

	lr_start_transaction("Jpetstore_Signin");

	/* sign in click */

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(32);

	web_url("Sign In", 
		"URL=https://jpetstore.cfapps.io/login", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://jpetstore.cfapps.io/catalog", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("Jpet_store_sginin_credentials");

	/* signin with  credentials */

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
		"https://jpetstore.cfapps.io");

	web_submit_data("login", 
		"Action=https://jpetstore.cfapps.io/login", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://jpetstore.cfapps.io/login", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=_csrf", "Value=832ee618-9ef5-419b-8ce9-f57b90bbafe7", ENDITEM, 
		"Name=username", "Value=sachin_vn_shetty", ENDITEM, 
		"Name=password", "Value=sachin123", ENDITEM, 
		LAST);

	lr_start_transaction("Jpetstore_dog");

	/* clicking on dog catagory */

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(41);

	web_url("sm_dogs.gif", 
		"URL=https://jpetstore.cfapps.io/catalog/categories/DOGS", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://jpetstore.cfapps.io/catalog", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("jpetstore_bulldog");

	/* clicking on bulldog */

	web_add_header("X-Goog-Update-AppId", 
		"oimompecagnajdejgnnjijobebaeigek,mimojjlkmoijpicakmndhoigimigcmbb,hnimpnehoodheedghdeeijklkeaacbdc,hfnkpimlhhgieaddgfemjhofmfblmnib,ojjgnpkioondelmggbekfhllhdaimnho,llkgjffcdpffmhiakmfcdcblohccpfmo,khaoiebndkojlmppeemjhbpbandiljpe,giekcmmlnklenlaomppkphknjmnnpneh,gcmjkmgdlgnkkcocmoeiminaijmmjnii,aemomkdncapdnfajjbbcbdebjljbpmpj,gkmgaooipdjhmangpemjhigmamcehddo,copjbmjbojbakpaedmpkhmiplmmehfck,npdjjkjlcidkjlamlmmdelcjbcpdjocm");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-70.0.3538.77");

	lr_think_time(26);

	web_custom_request("update2", 
		"URL=https://update.googleapis.com/service/update2?cup2key=8:2861196085&cup2hreq=07a0736dd2bf60f8943ac02cd704a9dafed2e522c38b9457dc962f295c6dd2ba", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"EncType=application/xml", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><request protocol=\"3.1\" dedup=\"cr\" acceptformat=\"crx2,crx3\" sessionid=\"{e7e4da33-fb58-4b83-a413-f21350d500f9}\" requestid=\"{db9c88a5-36c9-415e-8a5c-460fd7b67957}\" updater=\"chrome\" updaterversion=\"70.0.3538.77\" prodversion=\"70.0.3538.77\" lang=\"en-US\" updaterchannel=\"\" prodchannel=\"\" os=\"win\" arch=\"x86\" nacl_arch=\"x86-64\" wow64=\"1\" domainjoined=\"1\"><hw physmemory=\"8\"/><os platform=\"Windows\" arch=\"x86_64\" version=\""
		"10.0.17134.112\"/><updater autoupdatecheckenabled=\"1\" ismachine=\"1\" lastchecked=\"0\" laststarted=\"0\" name=\"Omaha\" updatepolicy=\"1\" version=\"1.3.33.17\"/><app appid=\"oimompecagnajdejgnnjijobebaeigek\" version=\"4.10.1196.0\" brand=\"GCEA\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{60bb02d0-50fe-4e97-983d-741f9da8aa36}\"/></app><app appid=\"mimojjlkmoijpicakmndhoigimigcmbb\" version=\"31.0.0.122\" brand=\"GCEA\" cohort=\"1:d0j:\" cohortname=\"Chrome [M50... M99]\" "
		"enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{70fd34d2-4ded-4009-8b32-9e4d25d722dc}\"/><packages><package fp=\"1.7aac753b62e4ba2ebc03b3b6347a700116c0895986524c07925db9b3fea06138\"/></packages></app><app appid=\"hnimpnehoodheedghdeeijklkeaacbdc\" version=\"0.57.44.2492\" brand=\"GCEA\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{0273cd08-f955-4428-8381-d7c047b19c1a}\"/><packages><package fp=\"1.1cd7dc2056afaa0f6a705c9a17d22bba6578b33f5dae9e2d6518a0bfcced2396\"/"
		"></packages></app><app appid=\"hfnkpimlhhgieaddgfemjhofmfblmnib\" version=\"4813\" brand=\"GCEA\" cohort=\"1:jcl:\" cohortname=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{149c54a2-24f8-40a4-96db-90b985d74519}\"/><packages><package fp=\"1.c77b10e749e9cee41b551a43673185db9880d959252c72b9f73ba51898d0f8e8\"/></packages></app><app appid=\"ojjgnpkioondelmggbekfhllhdaimnho\" version=\"934\" brand=\"GCEA\" cohort=\"1:0:\" cohortname=\"Auto\" enabled=\"1\"><updatecheck/><ping "
		"rd=\"4332\" ping_freshness=\"{afeb786b-2f7f-4e90-89d0-e0e778f86814}\"/><packages><package fp=\"1.ed36b76c2421a3dce0cb6f4f47f5132aa0ab598f0a501e50ef96966563160de7\"/></packages></app><app appid=\"llkgjffcdpffmhiakmfcdcblohccpfmo\" version=\"0.0.0.0\" brand=\"GCEA\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{6c203443-0d84-41b8-a5fd-8fae322ea1b5}\"/></app><app appid=\"khaoiebndkojlmppeemjhbpbandiljpe\" version=\"21\" brand=\"GCEA\" cohort=\"1:cux:\" cohortname=\"Auto\" enabled=\""
		"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{51693b5d-3a7d-4113-9649-e09395a6c32f}\"/><packages><package fp=\"1.d14e4e9ea653227bcd79027da2a426c9a1beb507bedd219593febac2b97799cb\"/></packages></app><app appid=\"giekcmmlnklenlaomppkphknjmnnpneh\" version=\"4\" brand=\"GCEA\" cohort=\"1:j5l:\" cohortname=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{fa1b1608-c059-4f65-8443-f8174dbd43bf}\"/><packages><package fp=\""
		"1.3e0bc577e6a70f1ee3aea6e88b1d6e9390695692881a998f4c0e3c6d7cab7ad5\"/></packages></app><app appid=\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\" version=\"9.0\" brand=\"GCEA\" cohort=\"1:bm1:pxf@0.1\" cohortname=\"M54ToM70\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{7e7ee7cb-028f-4fe5-a519-b6e2511b4e35}\"/><packages><package fp=\"1.e75ebe461cdf7b3b2347c538adf621f7f6c3de6f4ab9dfa2b6b2a72774229852\"/></packages></app><app appid=\"aemomkdncapdnfajjbbcbdebjljbpmpj\" version=\"1.0.3.0\" "
		"brand=\"GCEA\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{2e1e1b5d-75dd-4035-beed-25ca7c3b0964}\"/></app><app appid=\"gkmgaooipdjhmangpemjhigmamcehddo\" version=\"35.179.201\" brand=\"GCEA\" tag=\"stable_eset\" cohort=\"1:lsl:\" cohortname=\"ESET Stable\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{2cda2769-c317-422c-b15a-a68f8f2b075d}\"/><packages><package fp=\"1.f0bfae041419e9b216fd8944b14eef5e87805bee40aec4d670c48a4ed54deb60\"/></packages></app><app "
		"appid=\"copjbmjbojbakpaedmpkhmiplmmehfck\" version=\"2018.9.6.0\" brand=\"GCEA\" cohort=\"1:p1x:\" cohortname=\"Auto\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\"{0e949800-646a-47d1-8013-54e1d7ca6a9e}\"/><packages><package fp=\"1.207921137eee9c0831e0bd890330986c10dfd9382034491b82de3f86ae6915f7\"/></packages></app><app appid=\"npdjjkjlcidkjlamlmmdelcjbcpdjocm\" version=\"0.0.0.0\" brand=\"GCEA\" enabled=\"1\"><updatecheck/><ping rd=\"4332\" ping_freshness=\""
		"{839b495e-2b2d-4959-84d4-80c9c4cf8124}\"/></app></request>", 
		LAST);

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("K9-BD-01", 
		"URL=https://jpetstore.cfapps.io/catalog/products/K9-BD-01", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://jpetstore.cfapps.io/catalog/categories/DOGS", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	/* selecting male adult bulldog */

	web_revert_auto_header("Upgrade-Insecure-Requests");

	lr_think_time(27);

	web_url("EST-6", 
		"URL=https://jpetstore.cfapps.io/catalog/items/EST-6", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://jpetstore.cfapps.io/catalog/products/K9-BD-01", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
