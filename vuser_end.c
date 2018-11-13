vuser_end()
{

	lr_start_transaction("Jpetstore_signout");

	/* signing out */

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("logout", 
		"URL=https://jpetstore.cfapps.io/logout", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://jpetstore.cfapps.io/catalog/items/EST-6", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("Jpetstore_signout",LR_AUTO);

	return 0;
}