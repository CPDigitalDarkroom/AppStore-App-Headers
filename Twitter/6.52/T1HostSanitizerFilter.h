/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:36 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TNLHostSanitizer.h>

@class NSDictionary, NSRegularExpression, NSString;

@interface T1HostSanitizerFilter : NSObject <TNLHostSanitizer> {

	NSDictionary* _hostMap;
	NSRegularExpression* _whiteListExpression;
	char _twitterAccessEnabled;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithHostMap:(id)arg1 whitelistExpression:(id)arg2 twitterAccessEnabled:(char)arg3 ;
-(void)host:(id)arg1 wasEncounteredForURLRequest:(id)arg2 asRedirect:(char)arg3 completion:(/*^block*/id)arg4 ;
@end

