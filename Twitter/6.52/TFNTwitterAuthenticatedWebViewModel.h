/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, NSDictionary, TFNTwitterCardImageSpec, TFNTwitterStatus;

@interface TFNTwitterAuthenticatedWebViewModel : NSObject {

	char _shouldPresentInExternalBrowser;
	NSURL* _webViewUrl;
	NSString* _webViewTitle;
	NSString* _title;
	NSString* _byline;
	NSString* _callToAction;
	NSString* _badgeText;
	NSDictionary* _imageDictionary;
	TFNTwitterCardImageSpec* _imageSpec;
	TFNTwitterStatus* _status;

}

@property (nonatomic,retain) TFNTwitterStatus * status;                          //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSURL * webViewUrl;                               //@synthesize webViewUrl=_webViewUrl - In the implementation block
@property (nonatomic,readonly) NSString * webViewTitle;                          //@synthesize webViewTitle=_webViewTitle - In the implementation block
@property (nonatomic,readonly) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * byline;                                //@synthesize byline=_byline - In the implementation block
@property (nonatomic,readonly) NSString * callToAction;                          //@synthesize callToAction=_callToAction - In the implementation block
@property (nonatomic,readonly) NSString * badgeText;                             //@synthesize badgeText=_badgeText - In the implementation block
@property (nonatomic,readonly) NSDictionary * imageDictionary;                   //@synthesize imageDictionary=_imageDictionary - In the implementation block
@property (nonatomic,readonly) char shouldPresentInExternalBrowser;              //@synthesize shouldPresentInExternalBrowser=_shouldPresentInExternalBrowser - In the implementation block
@property (nonatomic,readonly) TFNTwitterCardImageSpec * imageSpec;              //@synthesize imageSpec=_imageSpec - In the implementation block
-(NSString *)callToAction;
-(TFNTwitterCardImageSpec *)imageSpec;
-(NSString *)byline;
-(NSString *)badgeText;
-(NSDictionary *)imageDictionary;
-(NSString *)webViewTitle;
-(id)webViewUrlWithTweetParams;
-(char)shouldPresentInExternalBrowser;
-(NSURL *)webViewUrl;
-(id)init;
-(NSString *)title;
-(TFNTwitterStatus *)status;
-(void)setStatus:(TFNTwitterStatus *)arg1 ;
-(id)initWithStatus:(id)arg1 ;
@end

