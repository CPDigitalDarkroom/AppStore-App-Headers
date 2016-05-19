/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL, NSDate, SPTUpsellImage, NSArray;

@interface SPTUpsell : NSObject <NSCopying> {

	char _shouldRenderDismissButton;
	NSString* _identifier;
	NSString* _lineItemID;
	NSString* _promotedProduct;
	int _reason;
	int _type;
	NSURL* _impressionURL;
	NSDate* _expiration;
	int _style;
	SPTUpsellImage* _background;
	NSString* _localizedHeading;
	NSString* _localizedTitle;
	NSString* _localizedMessage;
	SPTUpsellImage* _icon;
	NSArray* _buttons;

}

@property (nonatomic,readonly) char isStatic; 
@property (nonatomic,readonly) int accountPromotedProduct; 
@property (getter=isExpired,nonatomic,readonly) char expired; 
@property (nonatomic,copy,readonly) NSArray * allRemoteResourceURLs; 
@property (nonatomic,copy,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * lineItemID;                        //@synthesize lineItemID=_lineItemID - In the implementation block
@property (nonatomic,copy,readonly) NSString * promotedProduct;                   //@synthesize promotedProduct=_promotedProduct - In the implementation block
@property (nonatomic,readonly) int reason;                                        //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) int type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSURL * impressionURL;                             //@synthesize impressionURL=_impressionURL - In the implementation block
@property (nonatomic,readonly) NSDate * expiration;                               //@synthesize expiration=_expiration - In the implementation block
@property (nonatomic,readonly) int style;                                         //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) SPTUpsellImage * background;                  //@synthesize background=_background - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedHeading;                  //@synthesize localizedHeading=_localizedHeading - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedTitle;                    //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedMessage;                  //@synthesize localizedMessage=_localizedMessage - In the implementation block
@property (nonatomic,copy,readonly) SPTUpsellImage * icon;                        //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy,readonly) NSArray * buttons;                            //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,readonly) char shouldRenderDismissButton;                    //@synthesize shouldRenderDismissButton=_shouldRenderDismissButton - In the implementation block
+(id)upsellOfStyleNothingForReason:(int)arg1 type:(int)arg2 ;
+(id)staticUpsellForPromotedProduct:(int)arg1 localizedHeading:(id)arg2 localizedTitle:(id)arg3 localizedMessage:(id)arg4 background:(id)arg5 icon:(id)arg6 buttons:(id)arg7 reason:(int)arg8 type:(int)arg9 style:(int)arg10 ;
+(void)addURLIfRemoteImage:(id)arg1 mutableURLs:(id)arg2 ;
-(NSString *)localizedHeading;
-(id)upsellWithBackground:(id)arg1 icon:(id)arg2 ;
-(char)shouldRenderDismissButton;
-(NSArray *)allRemoteResourceURLs;
-(NSString *)promotedProduct;
-(NSString *)lineItemID;
-(id)initWithIdentifier:(id)arg1 lineItemID:(id)arg2 promotedProduct:(id)arg3 localizedHeading:(id)arg4 localizedTitle:(id)arg5 localizedMessage:(id)arg6 background:(id)arg7 icon:(id)arg8 buttons:(id)arg9 shouldRenderDismissButton:(char)arg10 impressionURL:(id)arg11 expiration:(id)arg12 reason:(int)arg13 type:(int)arg14 style:(int)arg15 ;
-(char)isEqualToUpsell:(id)arg1 ;
-(NSURL *)impressionURL;
-(char)isStatic;
-(int)accountPromotedProduct;
-(NSDate *)expiration;
-(NSString *)localizedMessage;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)identifier;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)style;
-(SPTUpsellImage *)background;
-(NSString *)localizedTitle;
-(SPTUpsellImage *)icon;
-(NSArray *)buttons;
-(int)reason;
-(char)isExpired;
@end

