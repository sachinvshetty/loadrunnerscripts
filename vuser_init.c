
vuser_init()
{
	//832ee618-9ef5-419b-8ce9-f57b90bbafe7
	//_csrf" value="832ee618-9ef5-419b-8ce9-f57b90bbafe7"/>
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

	//Various Breeds, Exotic Varieties
	
	web_reg_find("text/IC=Various breeds, Exotic Varieties","savecount=enterstore",LAST);
	lr_start_transaction("Jpetstore_enter_the_store");

	/* enter the  store link */

	web_revert_auto_header("Upgrade-Insecure-Requests");
	web_url("Enter the Store",
		"URL=https://jpetstore.cfapps.io/catalog", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://jpetstore.cfapps.io/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
//		"Url=https://safebrowsing.googleapis.com/v4/fullHashes:find?$req="
//		"ChwKDGdvb2dsZWNocm9tZRIMNzAuMC4zNTM4Ljc3EhkKDQgBEAYYASIDMDAxMAMQFBoCGAshVuG7EhsKDQgFEAYYASIDMDAxMAEQq7MFGgIYC4a2IwESGQoNCAkQBhgBIgMwMDEwBhACGgIYC-NhoCoSGwoNCAEQBhgBIgMwMDEwARDWjQUaAhgLgUxVOhIbCg0IAxAGGAEiAzAwMTABEOCRBRoCGAs157gFEhoKDQgBEAgYASIDMDAxMAQQ-BQaAhgLCVWWGxIbCg0IBxAGGAEiAzAwMTABELydBBoCGAsQKhm5EhkKDQgKEAgYASIDMDAxMAEQBRoCGAsjd4_qEhkKDQgPEAYYASIDMDAxMAEQDBoCGAs6iAvYEhkKDQgJEAYYASIDMDAxMAEQCxoCGAtqpcvLEhoKDQgIEAYYASIDMDAxMAEQsQQaAhgLFIHj4xIaCg0IDRAGGAEiAzAwMTABENccGgIYCxzBVQQSGgoNCA4QBhgBIg"
//		"MwMDEwARCUPhoCGAvjrS_bGioIAQgDCAUIBggHCAgICQgKCA0IDggPEAEQCBoGCgT7gPdVIAEgAyAEIAY=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
//		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates:fetch?$req="
//		"ChwKDGdvb2dsZWNocm9tZRIMNzAuMC4zNTM4Ljc3GicIARABGhkKDQgBEAYYASIDMDAxMAMQFBoCGAshVuG7IgQgASACKAMaKQgFEAEaGwoNCAUQBhgBIgMwMDEwARCrswUaAhgLhrYjASIEIAEgAigBGicICRABGhkKDQgJEAYYASIDMDAxMAYQAhoCGAvjYaAqIgQgASACKAYaKQgBEAEaGwoNCAEQBhgBIgMwMDEwARDWjQUaAhgLgUxVOiIEIAEgAigBGikIAxABGhsKDQgDEAYYASIDMDAxMAEQ4JEFGgIYCzXnuAUiBCABIAIoARooCAEQCBoaCg0IARAIGAEiAzAwMTAEEPgUGgIYCwlVlhsiBCABIAIoBBopCAcQARobCg0IBxAGGAEiAzAwMTABELydBBoCGAsQKhm5IgQgASACKAEaJwgKEAgaGQoNCAoQCBgBIgMwMDEwARAFGgIYCyN3j-oiBCABIAIoARonCA8QARoZCg"
//		"0IDxAGGAEiAzAwMTABEAwaAhgLOogL2CIEIAEgAigBGicICRABGhkKDQgJEAYYASIDMDAxMAEQCxoCGAtqpcvLIgQgASACKAEaKAgIEAEaGgoNCAgQBhgBIgMwMDEwARCxBBoCGAsUgePjIgQgASACKAEaKAgNEAEaGgoNCA0QBhgBIgMwMDEwARDXHBoCGAscwVUEIgQgASACKAEaKAgOEAEaGgoNCA4QBhgBIgMwMDEwARCUPhoCGAvjrS_bIgQgASACKAEiAggB&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
		LAST);
	
	//lr_end_transaction("Jpetstore_enter_the_store",LR_AUTO);
	
	if(atoi(lr_eval_string("{enterstore}"))>0)
	{
		lr_end_transaction("Jpetstore_enter_the_store",LR_PASS);
	}
		else
			
	lr_end_transaction("Jpetstore_enter_the_store",LR_FAIL);
	
	
	web_reg_save_param("csrf_token","LB=_csrf\" value=\"","RB=\"/>", "ORD=1",LAST);


	lr_start_transaction("Jpetstore_Signin");

	/* sign in click */

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	//lr_think_time(32);

	web_url("Sign In", 
		"URL=https://jpetstore.cfapps.io/login", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://jpetstore.cfapps.io/catalog", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);
	
	
	lr_end_transaction("Jpetstore_Signin",LR_AUTO);
	
	
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
		"Name=_csrf", "Value={csrf_token}", ENDITEM, 
		"Name=username", "Value={Username}", ENDITEM, 
		"Name=password", "Value={Password}", ENDITEM, 
		LAST);
	
	lr_end_transaction("Jpet_store_sginin_credentials",LR_AUTO);
	return 0;
}
