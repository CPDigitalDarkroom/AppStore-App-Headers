/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:24 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/T1DirectMessageAbstractConversationEntryCell.h>

@class TFNTwitterAvatarImageView, TFNAttributedTextView, T1DirectMessageConversationAvatarUpdatedEntryDisplayModel;

@interface T1DirectMessageConversationAvatarUpdatedEntryCell : T1DirectMessageAbstractConversationEntryCell {

	TFNTwitterAvatarImageView* _avatarImageView;
	TFNAttributedTextView* _textLabel;

}

@property (nonatomic,readonly) T1DirectMessageConversationAvatarUpdatedEntryDisplayModel * avatarUpdatedEntryDisplayModel; 
@property (nonatomic,retain) TFNTwitterAvatarImageView * avatarImageView;                                                               //@synthesize avatarImageView=_avatarImageView - In the implementation block
@property (nonatomic,readonly) TFNAttributedTextView * textLabel;                                                                       //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic,__weak) id<T1DirectMessageConversationAvatarUpdatedEntryCellDelegate> delegate; 
-(TFNTwitterAvatarImageView *)avatarImageView;
-(void)setEntryDisplayModel:(id)arg1 ;
-(void)_avatarImageViewTapped:(id)arg1 ;
-(void)setAvatarImageView:(TFNTwitterAvatarImageView *)arg1 ;
-(void)_updateAvatarImage:(id)arg1 ;
-(void)_refreshContent;
-(T1DirectMessageConversationAvatarUpdatedEntryDisplayModel *)avatarUpdatedEntryDisplayModel;
-(void)_createAvatarImageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(TFNAttributedTextView *)textLabel;
@end

