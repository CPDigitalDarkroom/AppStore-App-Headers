/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/T1DirectMessageActivityEntryDisplayModel.h>

@class NSString, UIImage;

@interface T1DirectMessageConversationAvatarUpdatedEntryDisplayModel : T1DirectMessageActivityEntryDisplayModel {

	char _downloadingAvatarImage;
	NSString* _accessibilityAnnouncement;
	NSString* _text;
	UIImage* _avatarImage;

}

@property (nonatomic,readonly) id<TFNDirectMessageConversationAvatarUpdatedEntry> entry; 
@property (nonatomic,retain) UIImage * avatarImage;                                                   //@synthesize avatarImage=_avatarImage - In the implementation block
@property (nonatomic,readonly) CGSize avatarSize; 
@property (nonatomic,readonly) char shouldDisplayAvatarPreview; 
@property (nonatomic,readonly) float avatarBottomMargin; 
@property (nonatomic,readonly) int avatarSizeClass; 
+(id)cellReuseIdentifier;
+(Class)cellClass;
-(UIImage *)avatarImage;
-(void)setAvatarImage:(UIImage *)arg1 ;
-(id)initWithEntry:(id)arg1 displayState:(id)arg2 ;
-(char)shouldDisplayAvatarPreview;
-(void)_downloadAvatarImage;
-(int)avatarSizeClass;
-(float)avatarBottomMargin;
-(void)_updateAvatarImage:(id)arg1 error:(id)arg2 ;
-(id)accessibilityAnnouncement;
-(CGSize)avatarSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)text;
-(void)_updateAccessibility;
-(void)_updateText;
@end

