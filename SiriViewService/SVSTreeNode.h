//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFastEnumeration.h"

@class NSMutableArray;

@interface SVSTreeNode : NSObject <NSFastEnumeration>
{
    id _item;
    SVSTreeNode *_parentNode;
    NSMutableArray *_childNodes;
}

+ (id)absoluteIndexPathsForTreeNodes:(id)arg1;
@property(readonly, nonatomic, getter=_childNodes) NSMutableArray *childNodes; // @synthesize childNodes=_childNodes;
- (void)_setParentNode:(id)arg1;
@property(nonatomic) __weak SVSTreeNode *parentNode; // @synthesize parentNode=_parentNode;
@property(retain, nonatomic) id item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)enumerateDescendentNodesUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)enumerateChildNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateChildNodesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)replaceChildNodeAtIndex:(long long)arg1 withNode:(id)arg2;
- (void)removeChildNode:(id)arg1;
- (void)removeChildNodeAtIndex:(long long)arg1;
- (void)addChildNode:(id)arg1;
- (void)insertChildNode:(id)arg1 atIndex:(long long)arg2;
- (id)lastChildNode;
- (id)childNodeAtIndex:(long long)arg1;
- (long long)indexOfChildNode:(id)arg1;
- (long long)numberOfChildNodes;
- (void)removeFromParentNode;
- (id)indexPathOfNodeWithItem:(id)arg1;
- (id)nodeAtIndexPath:(id)arg1;
- (_Bool)containsNodeAtIndexPath:(id)arg1;
- (id)absoluteIndexPath;
- (id)indexPathFromAncestorNode:(id)arg1;
- (id)description;
- (void)_appendDescriptionToString:(id)arg1 withIndentation:(id)arg2;
- (id)init;

@end

