Action()
{
	lr_start_transaction("Jpetstore_dog");

	/* clicking on dog catagory */

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	//lr_think_time(41);

	web_url("sm_dogs.gif", 
		"URL=https://jpetstore.cfapps.io/catalog/categories/DOGS", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://jpetstore.cfapps.io/catalog", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("Jpetstore_dog",LR_AUTO);

	
	/* clicking on bulldog */
	lr_start_transaction("jpetstore_bulldog");


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
	
	lr_end_transaction("jpetstore_bulldog",LR_AUTO);

	
	
	
	/* selecting male adult bulldog */
	lr_start_transaction("jpetstore_maleadultdog");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	//lr_think_time(27);

	web_url("EST-6", 
		"URL=https://jpetstore.cfapps.io/catalog/items/EST-6", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://jpetstore.cfapps.io/catalog/products/K9-BD-01", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("jpetstore_maleadultdog",LR_AUTO);

	return 0;
}
