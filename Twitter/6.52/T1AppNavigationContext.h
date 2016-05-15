/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:33 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TFNTwitterUser, NSString;

@interface T1AppNavigationContext : NSObject {

	int _navigationContextType;
	TFNTwitterUser* _relatedUser;
	NSString* _relatedText;
	long long _relatedStatusID;

}

@property (assign,nonatomic) int navigationContextType;                 //@synthesize navigationContextType=_navigationContextType - In the implementation block
@property (nonatomic,retain) TFNTwitterUser * relatedUser;              //@synthesize relatedUser=_relatedUser - In the implementation block
@property (assign,nonatomic) long long relatedStatusID;                 //@synthesize relatedStatusID=_relatedStatusID - In the implementation block
@property (nonatomic,copy) NSString * relatedText;                      //@synthesize relatedText=_relatedText - In the implementation block
-(id)initWithNavigationContextType:(int)arg1 relatedUser:(id)arg2 ;
-(TFNTwitterUser *)relatedUser;
-(int)navigationContextType;
-(id)initWithNavigationContextType:(int)arg1 relatedText:(id)arg2 ;
-(id)initWithNavigationContextType:(int)arg1 ;
-(id)initWithNavigationContextType:(int)arg1 relatedStatusID:(long long)arg2 ;
-(long long)relatedStatusID;
-(void)setNavigationContextType:(int)arg1 ;
-(void)setRelatedUser:(TFNTwitterUser *)arg1 ;
-(void)setRelatedStatusID:(long long)arg1 ;
-(id)init;
-(void)setRelatedText:(NSString *)arg1 ;
-(NSString *)relatedText;
@end

