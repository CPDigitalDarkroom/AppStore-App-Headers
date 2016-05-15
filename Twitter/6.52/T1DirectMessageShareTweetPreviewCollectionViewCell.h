/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:36 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <TFNUI/TFNCollectionViewCell.h>

@class TFNTwitterAccount, TFNTwitterStatus, T1QuotedStatusView;

@interface T1DirectMessageShareTweetPreviewCollectionViewCell : TFNCollectionViewCell {

	TFNTwitterAccount* _account;
	TFNTwitterStatus* _status;
	T1QuotedStatusView* _statusView;

}

@property (nonatomic,readonly) TFNTwitterAccount * account;                  //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) TFNTwitterStatus * status;                    //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) T1QuotedStatusView * statusView;              //@synthesize statusView=_statusView - In the implementation block
+(CGSize)sizeForStatus:(id)arg1 constrainedToSize:(CGSize)arg2 layoutMetrics:(id)arg3 account:(id)arg4 ;
-(void)setAccount:(id)arg1 status:(id)arg2 ;
-(id)_accessibleStatusView;
-(void)layoutSubviews;
-(id)accessibilityIdentifier;
-(id)accessibilityLabel;
-(void)prepareForReuse;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(char)isAccessibilityElement;
-(T1QuotedStatusView *)statusView;
-(TFNTwitterStatus *)status;
-(TFNTwitterAccount *)account;
@end

