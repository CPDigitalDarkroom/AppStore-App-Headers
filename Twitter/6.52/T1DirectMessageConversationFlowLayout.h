/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:35 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>
#import <Twitter/T1DirectMessageConversationActivityIndicatorLayoutDelegate.h>

@class T1DirectMessageConversationActivityIndicatorLayout;

@interface T1DirectMessageConversationFlowLayout : UICollectionViewFlowLayout <T1DirectMessageConversationActivityIndicatorLayoutDelegate> {

	T1DirectMessageConversationActivityIndicatorLayout* _activityIndicator;

}

@property (nonatomic,retain) T1DirectMessageConversationActivityIndicatorLayout * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets collectionViewInsets; 
-(char)activityIndicatorLayoutShouldShowLoadTopActivityIndicator:(id)arg1 ;
-(float)widthForActivityIndicatorLayout:(id)arg1 ;
-(char)_shouldShowLoadTopActivityIndicator;
-(id)init;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(T1DirectMessageConversationActivityIndicatorLayout *)activityIndicator;
-(void)setActivityIndicator:(T1DirectMessageConversationActivityIndicatorLayout *)arg1 ;
-(UIEdgeInsets)collectionViewInsets;
@end

