//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  5 2015 02:41:00).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UXKit/UXView.h>

@class NSAttributedString, NSColor, NSFont, NSString, NSTextField;

@interface UXLabel : UXView <NSAccessibilityStaticText>
{
    NSTextField *_concreteTextField;
    BOOL _highlighted;
    NSColor *_textColor;
    NSColor *_shadowColor;
    long long _numberOfLines;
    NSColor *_highlightedTextColor;
    struct CGSize _shadowOffset;
}

@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(retain, nonatomic) NSColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(retain, nonatomic) NSColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) NSColor *textColor; // @synthesize textColor=_textColor;

- (id)accessibilityRoleDescription;
- (void)setAccessibilityRoleDescription:(id)arg1;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (void)setAccessibilityLabel:(id)arg1;
- (id)accessibilityValue;
- (id)textFieldCell;
@property(nonatomic) BOOL selectable;
@property(nonatomic) BOOL centerVertically;
@property(nonatomic) double preferredMaxLayoutWidth;
@property(nonatomic) unsigned long long textAlignment;
@property(nonatomic) unsigned long long lineBreakMode;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) NSFont *font;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;
- (void)setContentCompressionResistancePriority:(float)arg1 forOrientation:(long long)arg2;
- (double)lastBaselineOffsetFromBottom;
- (double)firstBaselineOffsetFromTop;
- (struct NSEdgeInsets)alignmentRectInsets;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
