/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, TFNTwitterStatus;

@interface T1SectionControllerPlaygroundViewControllerConversationItem : NSObject {

	char _expanded;
	NSString* _text;
	NSArray* _replies;
	NSString* _identifier;
	TFNTwitterStatus* _status;

}

@property (nonatomic,retain) NSString * text;                        //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSArray * replies;                      //@synthesize replies=_replies - In the implementation block
@property (assign,nonatomic) char expanded;                          //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,retain) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) TFNTwitterStatus * status;              //@synthesize status=_status - In the implementation block
-(char)containsOrIsEqualToItem:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)identifier;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setExpanded:(char)arg1 ;
-(char)expanded;
-(TFNTwitterStatus *)status;
-(void)setStatus:(TFNTwitterStatus *)arg1 ;
-(NSArray *)replies;
-(void)setReplies:(NSArray *)arg1 ;
@end

