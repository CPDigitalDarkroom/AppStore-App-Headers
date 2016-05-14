/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:58 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBBugReportClassifier : NSObject {

	int _chosenCategory;
	NSString* _attachmentFilename;
	NSString* _rule;
	NSString* _contents;

}
-(id)initiationSourceToProductAreaRules;
-(void)determineProductAreaMatchWithRuleSet:(id)arg1 contents:(id)arg2 attachmentFilename:(id)arg3 ;
-(id)windowRecursiveDescriptionToProductAreaRules;
-(id)descriptionToProductAreaRules;
-(id)instantArticlesToProductAreaRules;
-(id)placeTipsToProductAreaRules;
-(id)productAreaAsString:(int)arg1 ;
-(id)productAreaByClassifierWithInitiationSource:(unsigned)arg1 description:(id)arg2 attachments:(id)arg3 ;
-(id)init;
@end

